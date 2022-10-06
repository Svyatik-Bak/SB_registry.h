# SB_registry.h
Lib for C/C++ that make editing registry a lot easier

# Syntax

Create key
```
SRCreateKey(HKEY_LOCAL_MACHINE, N"SYSTEM\\Setup\\LabConfig");
```
Delete key
```
SRDeleteKey(HKEY_LOCAL_MACHINE, N"SYSTEM\\Setup\\LabConfig");
```
Create value or edit (string)
```
SRCreateValue_STRING(HKEY_LOCAL_MACHINE, N"SYSTEM\\Setup\\LabConfig", N"TEST", N"This is a test");
```
Create value or edit (DWORD)
```
SRCreateValue_DWORD(HKEY_LOCAL_MACHINE, N"SYSTEM\\Setup\\LabConfig", N"BypassTPMCheck", 0x000001);
```
