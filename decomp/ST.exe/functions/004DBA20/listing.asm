FUN_004dba20:
004DBA20  8D 91 D0 04 00 00         LEA EDX,[ECX + 0x4d0]
004DBA26  33 C0                     XOR EAX,EAX
004DBA28  89 02                     MOV dword ptr [EDX],EAX
004DBA2A  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
004DBA2D  8D 91 D8 04 00 00         LEA EDX,[ECX + 0x4d8]
004DBA33  89 81 D8 04 00 00         MOV dword ptr [ECX + 0x4d8],EAX
004DBA39  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
004DBA3C  8D 91 E0 04 00 00         LEA EDX,[ECX + 0x4e0]
004DBA42  81 C1 E8 04 00 00         ADD ECX,0x4e8
004DBA48  89 02                     MOV dword ptr [EDX],EAX
004DBA4A  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
004DBA4D  89 01                     MOV dword ptr [ECX],EAX
004DBA4F  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004DBA52  C3                        RET
