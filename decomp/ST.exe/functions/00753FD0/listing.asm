FUN_00753fd0:
00753FD0  53                        PUSH EBX
00753FD1  51                        PUSH ECX
00753FD2  52                        PUSH EDX
00753FD3  56                        PUSH ESI
00753FD4  57                        PUSH EDI
00753FD5  8B 45 04                  MOV EAX,dword ptr [EBP + 0x4]
00753FD8  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
00753FDB  33 C0                     XOR EAX,EAX
00753FDD  F6 45 3F 80               TEST byte ptr [EBP + 0x3f],0x80
00753FE1  75 09                     JNZ 0x00753fec
00753FE3  83 7D 00 00               CMP dword ptr [EBP],0x0
00753FE7  74 03                     JZ 0x00753fec
00753FE9  FF 55 00                  CALL dword ptr [EBP]
LAB_00753fec:
00753FEC  40                        INC EAX
00753FED  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
00753FF0  48                        DEC EAX
00753FF1  5F                        POP EDI
00753FF2  5E                        POP ESI
00753FF3  5A                        POP EDX
00753FF4  59                        POP ECX
00753FF5  5B                        POP EBX
00753FF6  C3                        RET
