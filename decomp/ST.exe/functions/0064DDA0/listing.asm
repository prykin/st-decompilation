AiEventClassTy::_CreateDest:
0064DDA0  55                        PUSH EBP
0064DDA1  8B EC                     MOV EBP,ESP
0064DDA3  83 EC 4C                  SUB ESP,0x4c
0064DDA6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0064DDAB  53                        PUSH EBX
0064DDAC  56                        PUSH ESI
0064DDAD  57                        PUSH EDI
0064DDAE  8D 55 B8                  LEA EDX,[EBP + -0x48]
0064DDB1  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0064DDB4  6A 00                     PUSH 0x0
0064DDB6  52                        PUSH EDX
0064DDB7  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
0064DDBE  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0064DDC1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064DDC7  E8 24 FA 0D 00            CALL 0x0072d7f0
0064DDCC  8B F0                     MOV ESI,EAX
0064DDCE  83 C4 08                  ADD ESP,0x8
0064DDD1  85 F6                     TEST ESI,ESI
0064DDD3  0F 85 B2 00 00 00         JNZ 0x0064de8b
0064DDD9  66 8B 75 08               MOV SI,word ptr [EBP + 0x8]
0064DDDD  66 85 F6                  TEST SI,SI
0064DDE0  74 06                     JZ 0x0064dde8
0064DDE2  66 83 FE 01               CMP SI,0x1
0064DDE6  75 05                     JNZ 0x0064dded
LAB_0064dde8:
0064DDE8  B8 01 00 00 00            MOV EAX,0x1
LAB_0064dded:
0064DDED  85 C0                     TEST EAX,EAX
0064DDEF  0F 84 81 00 00 00         JZ 0x0064de76
0064DDF5  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0064DDF8  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0064DDFB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0064DDFE  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0064DE04  57                        PUSH EDI
0064DE05  53                        PUSH EBX
0064DE06  50                        PUSH EAX
0064DE07  E8 2F 6F DB FF            CALL 0x00404d3b
0064DE0C  85 C0                     TEST EAX,EAX
0064DE0E  74 66                     JZ 0x0064de76
0064DE10  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
0064DE14  0F BF F6                  MOVSX ESI,SI
0064DE17  0F BF FF                  MOVSX EDI,DI
0064DE1A  0F BF DB                  MOVSX EBX,BX
0064DE1D  56                        PUSH ESI
0064DE1E  57                        PUSH EDI
0064DE1F  53                        PUSH EBX
0064DE20  50                        PUSH EAX
0064DE21  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064DE24  E8 37 54 DB FF            CALL 0x00403260
0064DE29  83 C4 10                  ADD ESP,0x10
0064DE2C  85 C0                     TEST EAX,EAX
0064DE2E  74 46                     JZ 0x0064de76
0064DE30  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0064DE33  85 C9                     TEST ECX,ECX
0064DE35  75 05                     JNZ 0x0064de3c
0064DE37  B9 A0 16 80 00            MOV ECX,0x8016a0
LAB_0064de3c:
0064DE3C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0064DE3F  85 C0                     TEST EAX,EAX
0064DE41  75 05                     JNZ 0x0064de48
0064DE43  B8 A0 16 80 00            MOV EAX,0x8016a0
LAB_0064de48:
0064DE48  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
0064DE4B  52                        PUSH EDX
0064DE4C  51                        PUSH ECX
0064DE4D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0064DE50  50                        PUSH EAX
0064DE51  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
0064DE55  50                        PUSH EAX
0064DE56  56                        PUSH ESI
0064DE57  57                        PUSH EDI
0064DE58  53                        PUSH EBX
0064DE59  51                        PUSH ECX
0064DE5A  E8 B3 56 DB FF            CALL 0x00403512
0064DE5F  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0064DE62  83 C4 20                  ADD ESP,0x20
0064DE65  33 C0                     XOR EAX,EAX
0064DE67  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064DE6D  5F                        POP EDI
0064DE6E  5E                        POP ESI
0064DE6F  5B                        POP EBX
0064DE70  8B E5                     MOV ESP,EBP
0064DE72  5D                        POP EBP
0064DE73  C2 20 00                  RET 0x20
LAB_0064de76:
0064DE76  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0064DE79  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0064DE7C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064DE82  5F                        POP EDI
0064DE83  5E                        POP ESI
0064DE84  5B                        POP EBX
0064DE85  8B E5                     MOV ESP,EBP
0064DE87  5D                        POP EBP
0064DE88  C2 20 00                  RET 0x20
LAB_0064de8b:
0064DE8B  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0064DE8E  68 04 2B 7D 00            PUSH 0x7d2b04
0064DE93  68 CC 4C 7A 00            PUSH 0x7a4ccc
0064DE98  56                        PUSH ESI
0064DE99  6A 00                     PUSH 0x0
0064DE9B  68 3C 01 00 00            PUSH 0x13c
0064DEA0  68 34 2A 7D 00            PUSH 0x7d2a34
0064DEA5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064DEAA  E8 21 F6 05 00            CALL 0x006ad4d0
0064DEAF  83 C4 18                  ADD ESP,0x18
0064DEB2  85 C0                     TEST EAX,EAX
0064DEB4  74 01                     JZ 0x0064deb7
0064DEB6  CC                        INT3
LAB_0064deb7:
0064DEB7  68 3D 01 00 00            PUSH 0x13d
0064DEBC  68 34 2A 7D 00            PUSH 0x7d2a34
0064DEC1  6A 00                     PUSH 0x0
0064DEC3  56                        PUSH ESI
0064DEC4  E8 77 7F 05 00            CALL 0x006a5e40
0064DEC9  8B C6                     MOV EAX,ESI
0064DECB  5F                        POP EDI
0064DECC  5E                        POP ESI
0064DECD  5B                        POP EBX
0064DECE  8B E5                     MOV ESP,EBP
0064DED0  5D                        POP EBP
0064DED1  C2 20 00                  RET 0x20
