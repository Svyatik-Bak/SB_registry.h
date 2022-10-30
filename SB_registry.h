#include <windows.h>

//Unicode
void SRCreateKeyW(struct HKEY__ *a, LPCWSTR b)  //SR = Svyatik Registry
{
  HKEY hKey;
  RegCreateKeyExW(a, b, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL);
}

void SRDeleteKeyW(struct HKEY__ *a, LPCWSTR b)
{
  HKEY hKey;
  RegCreateKeyExW(a, b, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL);
}

void SRCreateValueW_DWORD(struct HKEY__ *a, LPCWSTR b, LPCWSTR v, DWORD c)
{
    HKEY key;
    RegOpenKeyExW(a, b, 0, KEY_SET_VALUE | KEY_WOW64_64KEY, &key);
    RegSetValueExW(key, v, 0, REG_DWORD, (LPBYTE)&c, sizeof(DWORD));
    RegCloseKey(key);
}

void SRCreateValueW_STRING(struct HKEY__ *HKEY1, LPCWSTR path, LPCWSTR ValueName, LPCWSTR Value)
{
    HKEY key;
    RegOpenKeyExW(HKEY1, path, 0, KEY_SET_VALUE, &key);
    RegSetValueExW(key, ValueName, 0, REG_SZ, (const BYTE*)Value, (lstrlenW(Value)+1) * sizeof(TCHAR));
    RegCloseKey(key);
}

// ASCII
void SRCreateKeyA(struct HKEY__ *a, LPCSTR b)  //SR = Svyatik Registry
{
  HKEY hKey;
  RegCreateKeyExA(a, b, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL);
}

void SRDeleteKeyA(struct HKEY__ *a, LPCSTR b)
{
  HKEY hKey;
  RegCreateKeyExA(a, b, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL);
}

void SRCreateValueA_DWORD(struct HKEY__ *a, LPCSTR b, LPCSTR v, DWORD c)
{
    HKEY key;
    RegOpenKeyExA(a, b, 0, KEY_SET_VALUE | KEY_WOW64_64KEY, &key);
    RegSetValueExA(key, v, 0, REG_DWORD, (LPBYTE)&c, sizeof(DWORD));
    RegCloseKey(key);
}

void SRCreateValueA_STRING(struct HKEY__ *HKEY1, LPCSTR path, LPCSTR ValueName, LPCSTR Value)
{
    HKEY key;
    RegOpenKeyExA(HKEY1, path, 0, KEY_SET_VALUE, &key);
    RegSetValueExA(key, ValueName, 0, REG_SZ, (const BYTE*)Value, (lstrlenA(Value)+1) * sizeof(TCHAR));
    RegCloseKey(key);
}

