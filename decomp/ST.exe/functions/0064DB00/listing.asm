AiEventClassTy::_CreateArt:
0064DB00  55                        PUSH EBP
0064DB01  8B EC                     MOV EBP,ESP
0064DB03  83 EC 64                  SUB ESP,0x64
0064DB06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064DB0B  56                        PUSH ESI
0064DB0C  57                        PUSH EDI
0064DB0D  8D 55 A0                  LEA EDX,[EBP + -0x60]
0064DB10  8D 4D 9C                  LEA ECX,[EBP + -0x64]
0064DB13  6A 00                     PUSH 0x0
0064DB15  52                        PUSH EDX
0064DB16  C7 45 E0 FF FF FF FF      MOV dword ptr [EBP + -0x20],0xffffffff
0064DB1D  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0064DB20  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064DB26  E8 C5 FC 0D 00            CALL 0x0072d7f0
0064DB2B  8B F0                     MOV ESI,EAX
0064DB2D  83 C4 08                  ADD ESP,0x8
0064DB30  85 F6                     TEST ESI,ESI
0064DB32  0F 85 38 01 00 00         JNZ 0x0064dc70
0064DB38  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0064DB3D  85 C0                     TEST EAX,EAX
0064DB3F  0F 84 17 01 00 00         JZ 0x0064dc5c
0064DB45  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
0064DB49  66 85 C0                  TEST AX,AX
0064DB4C  7F 0A                     JG 0x0064db58
0064DB4E  66 3D 15 00               CMP AX,0x15
0064DB52  7E 04                     JLE 0x0064db58
0064DB54  33 C0                     XOR EAX,EAX
0064DB56  EB 05                     JMP 0x0064db5d
LAB_0064db58:
0064DB58  B8 01 00 00 00            MOV EAX,0x1
LAB_0064db5d:
0064DB5D  85 C0                     TEST EAX,EAX
0064DB5F  0F 84 F7 00 00 00         JZ 0x0064dc5c
0064DB65  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
0064DB69  66 3D 01 00               CMP AX,0x1
0064DB6D  74 10                     JZ 0x0064db7f
0064DB6F  66 3D 02 00               CMP AX,0x2
0064DB73  74 0A                     JZ 0x0064db7f
0064DB75  66 3D 03 00               CMP AX,0x3
0064DB79  0F 85 DD 00 00 00         JNZ 0x0064dc5c
LAB_0064db7f:
0064DB7F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0064DB82  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0064DB85  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0064DB88  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0064DB8E  50                        PUSH EAX
0064DB8F  57                        PUSH EDI
0064DB90  56                        PUSH ESI
0064DB91  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0064DB94  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0064DB97  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0064DB9A  E8 9C 71 DB FF            CALL 0x00404d3b
0064DB9F  85 C0                     TEST EAX,EAX
0064DBA1  75 3C                     JNZ 0x0064dbdf
0064DBA3  8D 45 E8                  LEA EAX,[EBP + -0x18]
0064DBA6  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0064DBA9  50                        PUSH EAX
0064DBAA  8D 55 EC                  LEA EDX,[EBP + -0x14]
0064DBAD  4E                        DEC ESI
0064DBAE  51                        PUSH ECX
0064DBAF  8D 45 F0                  LEA EAX,[EBP + -0x10]
0064DBB2  4F                        DEC EDI
0064DBB3  52                        PUSH EDX
0064DBB4  50                        PUSH EAX
0064DBB5  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0064DBB8  C7 45 E4 03 00 00 00      MOV dword ptr [EBP + -0x1c],0x3
0064DBBF  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0064DBC2  C7 45 E8 03 00 00 00      MOV dword ptr [EBP + -0x18],0x3
0064DBC9  E8 38 3D DB FF            CALL 0x00401906
0064DBCE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0064DBD1  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0064DBD4  83 C4 10                  ADD ESP,0x10
0064DBD7  41                        INC ECX
0064DBD8  42                        INC EDX
0064DBD9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0064DBDC  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0064dbdf:
0064DBDF  8D 45 F4                  LEA EAX,[EBP + -0xc]
0064DBE2  68 FD 00 00 00            PUSH 0xfd
0064DBE7  8D 4D FC                  LEA ECX,[EBP + -0x4]
0064DBEA  50                        PUSH EAX
0064DBEB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0064DBEE  8D 55 F8                  LEA EDX,[EBP + -0x8]
0064DBF1  51                        PUSH ECX
0064DBF2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064DBF5  52                        PUSH EDX
0064DBF6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0064DBF9  50                        PUSH EAX
0064DBFA  51                        PUSH ECX
0064DBFB  52                        PUSH EDX
0064DBFC  E8 9C 41 DB FF            CALL 0x00401d9d
0064DC01  83 C4 1C                  ADD ESP,0x1c
0064DC04  85 C0                     TEST EAX,EAX
0064DC06  74 54                     JZ 0x0064dc5c
0064DC08  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0064DC0B  85 C9                     TEST ECX,ECX
0064DC0D  75 05                     JNZ 0x0064dc14
0064DC0F  B9 A0 16 80 00            MOV ECX,0x8016a0
LAB_0064dc14:
0064DC14  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0064DC17  85 C0                     TEST EAX,EAX
0064DC19  75 05                     JNZ 0x0064dc20
0064DC1B  B8 A0 16 80 00            MOV EAX,0x8016a0
LAB_0064dc20:
0064DC20  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0064DC23  52                        PUSH EDX
0064DC24  6A FF                     PUSH -0x1
0064DC26  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
0064DC2A  51                        PUSH ECX
0064DC2B  50                        PUSH EAX
0064DC2C  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
0064DC30  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
0064DC34  50                        PUSH EAX
0064DC35  51                        PUSH ECX
0064DC36  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
0064DC3A  0F BF 4D 08               MOVSX ECX,word ptr [EBP + 0x8]
0064DC3E  52                        PUSH EDX
0064DC3F  50                        PUSH EAX
0064DC40  51                        PUSH ECX
0064DC41  E8 13 44 DB FF            CALL 0x00402059
0064DC46  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0064DC49  83 C4 24                  ADD ESP,0x24
0064DC4C  33 C0                     XOR EAX,EAX
0064DC4E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064DC54  5F                        POP EDI
0064DC55  5E                        POP ESI
0064DC56  8B E5                     MOV ESP,EBP
0064DC58  5D                        POP EBP
0064DC59  C2 20 00                  RET 0x20
LAB_0064dc5c:
0064DC5C  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0064DC5F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0064DC62  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064DC68  5F                        POP EDI
0064DC69  5E                        POP ESI
0064DC6A  8B E5                     MOV ESP,EBP
0064DC6C  5D                        POP EBP
0064DC6D  C2 20 00                  RET 0x20
LAB_0064dc70:
0064DC70  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0064DC73  68 E4 2A 7D 00            PUSH 0x7d2ae4
0064DC78  68 CC 4C 7A 00            PUSH 0x7a4ccc
0064DC7D  56                        PUSH ESI
0064DC7E  6A 00                     PUSH 0x0
0064DC80  68 17 01 00 00            PUSH 0x117
0064DC85  68 34 2A 7D 00            PUSH 0x7d2a34
0064DC8A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064DC8F  E8 3C F8 05 00            CALL 0x006ad4d0
0064DC94  83 C4 18                  ADD ESP,0x18
0064DC97  85 C0                     TEST EAX,EAX
0064DC99  74 01                     JZ 0x0064dc9c
0064DC9B  CC                        INT3
LAB_0064dc9c:
0064DC9C  68 18 01 00 00            PUSH 0x118
0064DCA1  68 34 2A 7D 00            PUSH 0x7d2a34
0064DCA6  6A 00                     PUSH 0x0
0064DCA8  56                        PUSH ESI
0064DCA9  E8 92 81 05 00            CALL 0x006a5e40
0064DCAE  8B C6                     MOV EAX,ESI
0064DCB0  5F                        POP EDI
0064DCB1  5E                        POP ESI
0064DCB2  8B E5                     MOV ESP,EBP
0064DCB4  5D                        POP EBP
0064DCB5  C2 20 00                  RET 0x20
