FUN_00754af0:
00754AF0  55                        PUSH EBP
00754AF1  8B EC                     MOV EBP,ESP
00754AF3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00754AF6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00754AF9  56                        PUSH ESI
00754AFA  BE 01 00 00 00            MOV ESI,0x1
00754AFF  66 83 79 0E 08            CMP word ptr [ECX + 0xe],0x8
00754B04  75 16                     JNZ 0x00754b1c
00754B06  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
00754B09  85 C9                     TEST ECX,ECX
00754B0B  75 09                     JNZ 0x00754b16
00754B0D  C7 40 58 00 01 00 00      MOV dword ptr [EAX + 0x58],0x100
00754B14  EB 03                     JMP 0x00754b19
LAB_00754b16:
00754B16  89 48 58                  MOV dword ptr [EAX + 0x58],ECX
LAB_00754b19:
00754B19  89 70 4C                  MOV dword ptr [EAX + 0x4c],ESI
LAB_00754b1c:
00754B1C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00754B1F  BA 02 00 00 00            MOV EDX,0x2
00754B24  F6 C1 04                  TEST CL,0x4
00754B27  74 09                     JZ 0x00754b32
00754B29  C7 40 40 00 00 00 00      MOV dword ptr [EAX + 0x40],0x0
00754B30  EB 12                     JMP 0x00754b44
LAB_00754b32:
00754B32  F6 C1 08                  TEST CL,0x8
00754B35  74 05                     JZ 0x00754b3c
00754B37  89 70 40                  MOV dword ptr [EAX + 0x40],ESI
00754B3A  EB 08                     JMP 0x00754b44
LAB_00754b3c:
00754B3C  F6 C1 10                  TEST CL,0x10
00754B3F  74 03                     JZ 0x00754b44
00754B41  89 50 40                  MOV dword ptr [EAX + 0x40],EDX
LAB_00754b44:
00754B44  F6 C1 80                  TEST CL,0x80
00754B47  74 05                     JZ 0x00754b4e
00754B49  89 50 50                  MOV dword ptr [EAX + 0x50],EDX
00754B4C  EB 16                     JMP 0x00754b64
LAB_00754b4e:
00754B4E  F6 C1 20                  TEST CL,0x20
00754B51  74 09                     JZ 0x00754b5c
00754B53  C7 40 50 00 00 00 00      MOV dword ptr [EAX + 0x50],0x0
00754B5A  EB 08                     JMP 0x00754b64
LAB_00754b5c:
00754B5C  F6 C1 40                  TEST CL,0x40
00754B5F  74 03                     JZ 0x00754b64
00754B61  89 70 50                  MOV dword ptr [EAX + 0x50],ESI
LAB_00754b64:
00754B64  84 CA                     TEST DL,CL
00754B66  74 06                     JZ 0x00754b6e
00754B68  89 70 24                  MOV dword ptr [EAX + 0x24],ESI
00754B6B  89 70 4C                  MOV dword ptr [EAX + 0x4c],ESI
LAB_00754b6e:
00754B6E  F6 C5 01                  TEST CH,0x1
00754B71  5E                        POP ESI
00754B72  74 07                     JZ 0x00754b7b
00754B74  C7 40 44 00 00 00 00      MOV dword ptr [EAX + 0x44],0x0
LAB_00754b7b:
00754B7B  5D                        POP EBP
00754B7C  C2 0C 00                  RET 0xc
