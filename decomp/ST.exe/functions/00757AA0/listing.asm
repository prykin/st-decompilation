FUN_00757aa0:
00757AA0  55                        PUSH EBP
00757AA1  8B EC                     MOV EBP,ESP
00757AA3  56                        PUSH ESI
00757AA4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00757AA7  B8 DC FF 00 00            MOV EAX,0xffdc
00757AAC  39 46 18                  CMP dword ptr [ESI + 0x18],EAX
00757AAF  7F 05                     JG 0x00757ab6
00757AB1  39 46 14                  CMP dword ptr [ESI + 0x14],EAX
00757AB4  7E 14                     JLE 0x00757aca
LAB_00757ab6:
00757AB6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00757ABB  6A 32                     PUSH 0x32
00757ABD  68 98 2D 7F 00            PUSH 0x7f2d98
00757AC2  50                        PUSH EAX
00757AC3  6A 28                     PUSH 0x28
00757AC5  E8 76 E3 F4 FF            CALL 0x006a5e40
LAB_00757aca:
00757ACA  83 BE CC 00 00 00 08      CMP dword ptr [ESI + 0xcc],0x8
00757AD1  74 15                     JZ 0x00757ae8
00757AD3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00757AD9  6A 36                     PUSH 0x36
00757ADB  68 98 2D 7F 00            PUSH 0x7f2d98
00757AE0  51                        PUSH ECX
00757AE1  6A 0D                     PUSH 0xd
00757AE3  E8 58 E3 F4 FF            CALL 0x006a5e40
LAB_00757ae8:
00757AE8  83 7E 1C 0A               CMP dword ptr [ESI + 0x1c],0xa
00757AEC  7E 15                     JLE 0x00757b03
00757AEE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00757AF4  6A 3B                     PUSH 0x3b
00757AF6  68 98 2D 7F 00            PUSH 0x7f2d98
00757AFB  52                        PUSH EDX
00757AFC  6A 18                     PUSH 0x18
00757AFE  E8 3D E3 F4 FF            CALL 0x006a5e40
LAB_00757b03:
00757B03  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00757B06  53                        PUSH EBX
00757B07  B8 01 00 00 00            MOV EAX,0x1
00757B0C  33 DB                     XOR EBX,EBX
00757B0E  89 86 22 01 00 00         MOV dword ptr [ESI + 0x122],EAX
00757B14  89 86 26 01 00 00         MOV dword ptr [ESI + 0x126],EAX
00757B1A  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
00757B20  57                        PUSH EDI
00757B21  85 C9                     TEST ECX,ECX
00757B23  7E 62                     JLE 0x00757b87
00757B25  8D 78 0C                  LEA EDI,[EAX + 0xc]
LAB_00757b28:
00757B28  8B 47 FC                  MOV EAX,dword ptr [EDI + -0x4]
00757B2B  85 C0                     TEST EAX,EAX
00757B2D  7E 10                     JLE 0x00757b3f
00757B2F  83 F8 04                  CMP EAX,0x4
00757B32  7F 0B                     JG 0x00757b3f
00757B34  8B 07                     MOV EAX,dword ptr [EDI]
00757B36  85 C0                     TEST EAX,EAX
00757B38  7E 05                     JLE 0x00757b3f
00757B3A  83 F8 04                  CMP EAX,0x4
00757B3D  7E 14                     JLE 0x00757b53
LAB_00757b3f:
00757B3F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00757B44  6A 44                     PUSH 0x44
00757B46  68 98 2D 7F 00            PUSH 0x7f2d98
00757B4B  50                        PUSH EAX
00757B4C  6A 10                     PUSH 0x10
00757B4E  E8 ED E2 F4 FF            CALL 0x006a5e40
LAB_00757b53:
00757B53  8B 86 22 01 00 00         MOV EAX,dword ptr [ESI + 0x122]
00757B59  8B 4F FC                  MOV ECX,dword ptr [EDI + -0x4]
00757B5C  3B C1                     CMP EAX,ECX
00757B5E  7F 02                     JG 0x00757b62
00757B60  8B C1                     MOV EAX,ECX
LAB_00757b62:
00757B62  89 86 22 01 00 00         MOV dword ptr [ESI + 0x122],EAX
00757B68  8B 86 26 01 00 00         MOV EAX,dword ptr [ESI + 0x126]
00757B6E  8B 0F                     MOV ECX,dword ptr [EDI]
00757B70  3B C1                     CMP EAX,ECX
00757B72  7F 02                     JG 0x00757b76
00757B74  8B C1                     MOV EAX,ECX
LAB_00757b76:
00757B76  89 86 26 01 00 00         MOV dword ptr [ESI + 0x126],EAX
00757B7C  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00757B7F  43                        INC EBX
00757B80  83 C7 54                  ADD EDI,0x54
00757B83  3B D8                     CMP EBX,EAX
00757B85  7C A1                     JL 0x00757b28
LAB_00757b87:
00757B87  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00757B8A  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
00757B90  33 DB                     XOR EBX,EBX
00757B92  C7 86 2A 01 00 00 08 00 00 00  MOV dword ptr [ESI + 0x12a],0x8
00757B9C  85 C9                     TEST ECX,ECX
00757B9E  0F 8E 88 00 00 00         JLE 0x00757c2c
00757BA4  8D 78 1C                  LEA EDI,[EAX + 0x1c]
LAB_00757ba7:
00757BA7  8B 57 EC                  MOV EDX,dword ptr [EDI + -0x14]
00757BAA  C7 47 08 08 00 00 00      MOV dword ptr [EDI + 0x8],0x8
00757BB1  0F AF 56 14               IMUL EDX,dword ptr [ESI + 0x14]
00757BB5  8B 8E 22 01 00 00         MOV ECX,dword ptr [ESI + 0x122]
00757BBB  C1 E1 03                  SHL ECX,0x3
00757BBE  51                        PUSH ECX
00757BBF  52                        PUSH EDX
00757BC0  E8 AB 22 00 00            CALL 0x00759e70
00757BC5  8B 4F F0                  MOV ECX,dword ptr [EDI + -0x10]
00757BC8  89 07                     MOV dword ptr [EDI],EAX
00757BCA  0F AF 4E 18               IMUL ECX,dword ptr [ESI + 0x18]
00757BCE  8B 86 26 01 00 00         MOV EAX,dword ptr [ESI + 0x126]
00757BD4  C1 E0 03                  SHL EAX,0x3
00757BD7  50                        PUSH EAX
00757BD8  51                        PUSH ECX
00757BD9  E8 92 22 00 00            CALL 0x00759e70
00757BDE  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
00757BE1  8B 47 EC                  MOV EAX,dword ptr [EDI + -0x14]
00757BE4  0F AF 46 14               IMUL EAX,dword ptr [ESI + 0x14]
00757BE8  8B 96 22 01 00 00         MOV EDX,dword ptr [ESI + 0x122]
00757BEE  52                        PUSH EDX
00757BEF  50                        PUSH EAX
00757BF0  E8 7B 22 00 00            CALL 0x00759e70
00757BF5  8B 57 F0                  MOV EDX,dword ptr [EDI + -0x10]
00757BF8  89 47 0C                  MOV dword ptr [EDI + 0xc],EAX
00757BFB  0F AF 56 18               IMUL EDX,dword ptr [ESI + 0x18]
00757BFF  8B 8E 26 01 00 00         MOV ECX,dword ptr [ESI + 0x126]
00757C05  51                        PUSH ECX
00757C06  52                        PUSH EDX
00757C07  E8 64 22 00 00            CALL 0x00759e70
00757C0C  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
00757C0F  C7 47 14 01 00 00 00      MOV dword ptr [EDI + 0x14],0x1
00757C16  C7 47 30 00 00 00 00      MOV dword ptr [EDI + 0x30],0x0
00757C1D  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00757C20  43                        INC EBX
00757C21  83 C7 54                  ADD EDI,0x54
00757C24  3B D8                     CMP EBX,EAX
00757C26  0F 8C 7B FF FF FF         JL 0x00757ba7
LAB_00757c2c:
00757C2C  8B 86 26 01 00 00         MOV EAX,dword ptr [ESI + 0x126]
00757C32  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00757C35  C1 E0 03                  SHL EAX,0x3
00757C38  50                        PUSH EAX
00757C39  51                        PUSH ECX
00757C3A  E8 31 22 00 00            CALL 0x00759e70
00757C3F  8B 96 36 01 00 00         MOV EDX,dword ptr [ESI + 0x136]
00757C45  89 86 2E 01 00 00         MOV dword ptr [ESI + 0x12e],EAX
00757C4B  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00757C4E  5F                        POP EDI
00757C4F  3B D0                     CMP EDX,EAX
00757C51  5B                        POP EBX
00757C52  7C 1C                     JL 0x00757c70
00757C54  8B 86 D4 00 00 00         MOV EAX,dword ptr [ESI + 0xd4]
00757C5A  85 C0                     TEST EAX,EAX
00757C5C  75 12                     JNZ 0x00757c70
00757C5E  8B 86 A2 01 00 00         MOV EAX,dword ptr [ESI + 0x1a2]
00757C64  5E                        POP ESI
00757C65  C7 40 10 00 00 00 00      MOV dword ptr [EAX + 0x10],0x0
00757C6C  5D                        POP EBP
00757C6D  C2 04 00                  RET 0x4
LAB_00757c70:
00757C70  8B 8E A2 01 00 00         MOV ECX,dword ptr [ESI + 0x1a2]
00757C76  5E                        POP ESI
00757C77  C7 41 10 01 00 00 00      MOV dword ptr [ECX + 0x10],0x1
00757C7E  5D                        POP EBP
00757C7F  C2 04 00                  RET 0x4
