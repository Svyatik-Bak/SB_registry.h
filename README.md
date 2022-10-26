# ANNOUNCEMENT!!!!
Coming soon this project will closed

# SB_registry.h
Lib for C/C++ that make editing registry a lot easier

# [Download](https://github.com/Svyatik-Bak/SB_registry.h/archive/refs/heads/main.zip)
# git: https://github.com/Svyatik-Bak/SB_registry.h.git

# Syntax

Create key
```
SRCreateKey(HKEY_LOCAL_MACHINE, "SYSTEM\\Setup\\LabConfig");
```
Delete key
```
SRDeleteKey(HKEY_LOCAL_MACHINE, L"SYSTEM\\Setup\\LabConfig");
```
Create value or edit (string)
```
SRCreateValue_STRING(HKEY_LOCAL_MACHINE, L"SYSTEM\\Setup\\LabConfig", L"TEST", L"This is a test");
```
Create value or edit (DWORD)
```
SRCreateValue_DWORD(HKEY_LOCAL_MACHINE, L"SYSTEM\\Setup\\LabConfig", L"BypassTPMCheck", 0x000001);
```
