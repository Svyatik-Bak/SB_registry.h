# SB_registry.h
Lib for C/C++ that make editing registry a lot easier

# Syntax

# Create key
```
SRCreateKey(HKEY_LOCAL_MACHINE, N"SYSTEM\\Setup\\LabConfig");
```
# Delete key
```
SRDeleteKey(HKEY_LOCAL_MACHINE, N"SYSTEM\\Setup\\LabConfig");
```
# Create value (string)
```
SRCreateKey(HKEY_LOCAL_MACHINE, N"SYSTEM\\Setup\\LabConfig");
```
SRCreateValue_STRING(HKEY_LOCAL_MACHINE, N"SYSTEM\\Setup\\LabConfig", N"TEST", N"This is a test");
```
