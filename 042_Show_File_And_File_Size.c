/**
 * @file 042_Show_File_And_File_Size.c
 * @author Vinayak Mali
 * @brief To show file names and file sizes of a specific folder
 * @version 0.1
 * @date 2023-10-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <strsafe.h>
#pragma comment(lib, "User32.lib")

int _tmain(int argc, TCHAR *argv[])
{
   WIN32_FIND_DATA ffd;
   LARGE_INTEGER filesize;
   TCHAR szDir[MAX_PATH];
   HANDLE hFind = INVALID_HANDLE_VALUE;

   StringCchCopy(szDir, MAX_PATH, argv[1]);
   StringCchCat(szDir, MAX_PATH, TEXT("\\*"));

   hFind = FindFirstFile(szDir, &ffd);

   while (FindNextFile(hFind, &ffd) != 0)
   {
      if(ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
         continue;

      filesize.LowPart = ffd.nFileSizeLow;
      filesize.HighPart = ffd.nFileSizeHigh;
      _tprintf(TEXT("  %s   %lld bytes\n"), ffd.cFileName, filesize.QuadPart);
   }

   FindClose(hFind);
   return (0);
}
