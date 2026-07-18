FUN_00750ba0:
00750BA0  55                        PUSH EBP
00750BA1  8B EC                     MOV EBP,ESP
00750BA3  6A FF                     PUSH -0x1
00750BA5  68 48 1E 7A 00            PUSH 0x7a1e48
00750BAA  68 64 D9 72 00            PUSH 0x72d964
00750BAF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00750BB5  50                        PUSH EAX
00750BB6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00750BBD  83 EC 38                  SUB ESP,0x38
00750BC0  53                        PUSH EBX
00750BC1  56                        PUSH ESI
00750BC2  57                        PUSH EDI
00750BC3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00750BC6  33 FF                     XOR EDI,EDI
00750BC8  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00750BCB  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00750BCE  B8 00 08 00 00            MOV EAX,0x800
00750BD3  E8 68 CE FD FF            CALL 0x0072da40
00750BD8  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00750BDB  8B C4                     MOV EAX,ESP
00750BDD  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00750BE0  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00750BE7  8D 4D C4                  LEA ECX,[EBP + -0x3c]
00750BEA  51                        PUSH ECX
00750BEB  50                        PUSH EAX
00750BEC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00750BEF  52                        PUSH EDX
00750BF0  E8 CB 2F 00 00            CALL 0x00753bc0
00750BF5  83 F8 FC                  CMP EAX,-0x4
00750BF8  0F 84 CF 02 00 00         JZ 0x00750ecd
00750BFE  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00750C01  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00750C04  57                        PUSH EDI
00750C05  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00750C08  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00750C0B  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
00750C0E  51                        PUSH ECX
00750C0F  56                        PUSH ESI
00750C10  E8 6B 2F 00 00            CALL 0x00753b80
00750C15  8B D8                     MOV EBX,EAX
LAB_00750c17:
00750C17  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00750C1A  66 8B 48 34               MOV CX,word ptr [EAX + 0x34]
00750C1E  66 85 C9                  TEST CX,CX
00750C21  74 08                     JZ 0x00750c2b
00750C23  0F BF D1                  MOVSX EDX,CX
00750C26  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00750C29  EB 0A                     JMP 0x00750c35
LAB_00750c2b:
00750C2B  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00750C2E  51                        PUSH ECX
00750C2F  FF 50 08                  CALL dword ptr [EAX + 0x8]
00750C32  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_00750c35:
00750C35  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00750C38  8D 4A 08                  LEA ECX,[EDX + 0x8]
00750C3B  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00750C3E  0F BF 43 08               MOVSX EAX,word ptr [EBX + 0x8]
00750C42  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00750C45  0F BF 52 16               MOVSX EDX,word ptr [EDX + 0x16]
00750C49  83 EA 10                  SUB EDX,0x10
00750C4C  03 C8                     ADD ECX,EAX
00750C4E  3B CA                     CMP ECX,EDX
00750C50  7F 62                     JG 0x00750cb4
00750C52  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00750C55  89 44 FA 44               MOV dword ptr [EDX + EDI*0x8 + 0x44],EAX
00750C59  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00750C5C  8B 4C F8 44               MOV ECX,dword ptr [EAX + EDI*0x8 + 0x44]
00750C60  8D 44 19 10               LEA EAX,[ECX + EBX*0x1 + 0x10]
00750C64  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00750C67  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
00750C6A  8D 78 08                  LEA EDI,[EAX + 0x8]
00750C6D  8B D1                     MOV EDX,ECX
00750C6F  C1 E9 02                  SHR ECX,0x2
00750C72  F3 A5                     MOVSD.REP ES:EDI,ESI
00750C74  8B CA                     MOV ECX,EDX
00750C76  83 E1 03                  AND ECX,0x3
00750C79  F3 A4                     MOVSB.REP ES:EDI,ESI
00750C7B  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
00750C81  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00750C84  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00750C87  66 8B 55 BC               MOV DX,word ptr [EBP + -0x44]
00750C8B  66 01 53 08               ADD word ptr [EBX + 0x8],DX
00750C8F  8D 45 C4                  LEA EAX,[EBP + -0x3c]
00750C92  50                        PUSH EAX
00750C93  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00750C96  51                        PUSH ECX
00750C97  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00750C9A  52                        PUSH EDX
00750C9B  E8 20 2F 00 00            CALL 0x00753bc0
00750CA0  83 F8 FC                  CMP EAX,-0x4
00750CA3  0F 84 24 02 00 00         JZ 0x00750ecd
00750CA9  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
00750CAC  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00750CAF  E9 63 FF FF FF            JMP 0x00750c17
LAB_00750cb4:
00750CB4  4F                        DEC EDI
00750CB5  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00750CB8  78 43                     JS 0x00750cfd
00750CBA  8D 04 FD 40 00 00 00      LEA EAX,[EDI*0x8 + 0x40]
00750CC1  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
LAB_00750cc4:
00750CC4  57                        PUSH EDI
00750CC5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00750CC8  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00750CCB  8B 04 0A                  MOV EAX,dword ptr [EDX + ECX*0x1]
00750CCE  50                        PUSH EAX
00750CCF  56                        PUSH ESI
00750CD0  E8 AB 2E 00 00            CALL 0x00753b80
00750CD5  8B D8                     MOV EBX,EAX
00750CD7  0F BF 4B 08               MOVSX ECX,word ptr [EBX + 0x8]
00750CDB  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00750CDE  8D 42 08                  LEA EAX,[EDX + 0x8]
00750CE1  03 C8                     ADD ECX,EAX
00750CE3  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00750CE6  0F BF 50 16               MOVSX EDX,word ptr [EAX + 0x16]
00750CEA  83 EA 10                  SUB EDX,0x10
00750CED  3B CA                     CMP ECX,EDX
00750CEF  7E 0C                     JLE 0x00750cfd
00750CF1  4F                        DEC EDI
00750CF2  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00750CF5  83 6D B8 08               SUB dword ptr [EBP + -0x48],0x8
00750CF9  85 FF                     TEST EDI,EDI
00750CFB  7D C7                     JGE 0x00750cc4
LAB_00750cfd:
00750CFD  85 FF                     TEST EDI,EDI
00750CFF  0F 8D BD 00 00 00         JGE 0x00750dc2
00750D05  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00750D08  6A 38                     PUSH 0x38
00750D0A  8D 48 40                  LEA ECX,[EAX + 0x40]
00750D0D  51                        PUSH ECX
00750D0E  83 C0 48                  ADD EAX,0x48
00750D11  50                        PUSH EAX
00750D12  E8 59 CD FD FF            CALL 0x0072da70
00750D17  83 C4 0C                  ADD ESP,0xc
00750D1A  56                        PUSH ESI
00750D1B  E8 20 2E 00 00            CALL 0x00753b40
00750D20  8B F8                     MOV EDI,EAX
00750D22  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
00750D25  85 FF                     TEST EDI,EDI
00750D27  0F 8C 74 01 00 00         JL 0x00750ea1
00750D2D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00750D30  0F BF 50 16               MOVSX EDX,word ptr [EAX + 0x16]
00750D34  52                        PUSH EDX
00750D35  57                        PUSH EDI
00750D36  50                        PUSH EAX
00750D37  E8 14 3F F8 FF            CALL 0x006d4c50
00750D3C  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00750D3F  85 C0                     TEST EAX,EAX
00750D41  0F 85 64 01 00 00         JNZ 0x00750eab
00750D47  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00750D4A  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
00750D4D  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
00750D50  8B 76 0C                  MOV ESI,dword ptr [ESI + 0xc]
00750D53  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
00750D56  03 D9                     ADD EBX,ECX
00750D58  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
00750D5C  8B F3                     MOV ESI,EBX
00750D5E  8B FA                     MOV EDI,EDX
00750D60  8B C1                     MOV EAX,ECX
00750D62  C1 E9 02                  SHR ECX,0x2
00750D65  F3 A5                     MOVSD.REP ES:EDI,ESI
00750D67  8B C8                     MOV ECX,EAX
00750D69  83 E1 03                  AND ECX,0x3
00750D6C  F3 A4                     MOVSB.REP ES:EDI,ESI
00750D6E  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00750D71  89 0A                     MOV dword ptr [EDX],ECX
00750D73  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00750D76  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00750D79  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
00750D7D  83 E9 10                  SUB ECX,0x10
00750D80  33 C0                     XOR EAX,EAX
00750D82  8D 7B 10                  LEA EDI,[EBX + 0x10]
00750D85  8B F1                     MOV ESI,ECX
00750D87  C1 E9 02                  SHR ECX,0x2
00750D8A  F3 AB                     STOSD.REP ES:EDI
00750D8C  8B CE                     MOV ECX,ESI
00750D8E  83 E1 03                  AND ECX,0x3
00750D91  F3 AA                     STOSB.REP ES:EDI
00750D93  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00750D96  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
00750D99  33 C9                     XOR ECX,ECX
00750D9B  66 89 4B 08               MOV word ptr [EBX + 0x8],CX
00750D9F  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00750DA2  66 FF 40 2A               INC word ptr [EAX + 0x2a]
00750DA6  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00750DA9  C7 40 14 01 00 00 00      MOV dword ptr [EAX + 0x14],0x1
00750DB0  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
00750DB3  89 4A 44                  MOV dword ptr [EDX + 0x44],ECX
00750DB6  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
00750DB9  FF 45 E4                  INC dword ptr [EBP + -0x1c]
LAB_00750dbc:
00750DBC  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
00750DBF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_00750dc2:
00750DC2  0F BF 43 08               MOVSX EAX,word ptr [EBX + 0x8]
00750DC6  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00750DC9  89 44 F9 44               MOV dword ptr [ECX + EDI*0x8 + 0x44],EAX
00750DCD  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00750DD0  8B 44 FA 44               MOV EAX,dword ptr [EDX + EDI*0x8 + 0x44]
00750DD4  8D 44 18 10               LEA EAX,[EAX + EBX*0x1 + 0x10]
00750DD8  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00750DDB  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00750DDE  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
00750DE1  8D 78 08                  LEA EDI,[EAX + 0x8]
00750DE4  8B D1                     MOV EDX,ECX
00750DE6  C1 E9 02                  SHR ECX,0x2
00750DE9  F3 A5                     MOVSD.REP ES:EDI,ESI
00750DEB  8B CA                     MOV ECX,EDX
00750DED  83 E1 03                  AND ECX,0x3
00750DF0  F3 A4                     MOVSB.REP ES:EDI,ESI
00750DF2  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
00750DF8  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00750DFB  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00750DFE  8D 42 08                  LEA EAX,[EDX + 0x8]
00750E01  66 01 43 08               ADD word ptr [EBX + 0x8],AX
00750E05  8D 45 C4                  LEA EAX,[EBP + -0x3c]
00750E08  50                        PUSH EAX
00750E09  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00750E0C  51                        PUSH ECX
00750E0D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00750E10  52                        PUSH EDX
00750E11  E8 AA 2D 00 00            CALL 0x00753bc0
00750E16  83 F8 FC                  CMP EAX,-0x4
00750E19  0F 84 AE 00 00 00         JZ 0x00750ecd
00750E1F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00750E22  57                        PUSH EDI
00750E23  E8 18 2D 00 00            CALL 0x00753b40
00750E28  8B F0                     MOV ESI,EAX
00750E2A  85 F6                     TEST ESI,ESI
00750E2C  7C 78                     JL 0x00750ea6
00750E2E  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00750E31  89 30                     MOV dword ptr [EAX],ESI
00750E33  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00750E36  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
00750E3A  51                        PUSH ECX
00750E3B  56                        PUSH ESI
00750E3C  50                        PUSH EAX
00750E3D  E8 0E 3E F8 FF            CALL 0x006d4c50
00750E42  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00750E45  85 C0                     TEST EAX,EAX
00750E47  75 62                     JNZ 0x00750eab
00750E49  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00750E4C  8B 58 34                  MOV EBX,dword ptr [EAX + 0x34]
00750E4F  03 DE                     ADD EBX,ESI
00750E51  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
00750E55  33 C0                     XOR EAX,EAX
00750E57  8B FB                     MOV EDI,EBX
00750E59  8B D1                     MOV EDX,ECX
00750E5B  C1 E9 02                  SHR ECX,0x2
00750E5E  F3 AB                     STOSD.REP ES:EDI
00750E60  8B CA                     MOV ECX,EDX
00750E62  83 E1 03                  AND ECX,0x3
00750E65  F3 AA                     STOSB.REP ES:EDI
00750E67  89 33                     MOV dword ptr [EBX],ESI
00750E69  C7 43 04 FF FF FF FF      MOV dword ptr [EBX + 0x4],0xffffffff
00750E70  33 D2                     XOR EDX,EDX
00750E72  66 89 53 08               MOV word ptr [EBX + 0x8],DX
00750E76  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00750E79  40                        INC EAX
00750E7A  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00750E7D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00750E80  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
00750E83  89 54 C7 44               MOV dword ptr [EDI + EAX*0x8 + 0x44],EDX
00750E87  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00750E8A  89 74 C1 40               MOV dword ptr [ECX + EAX*0x8 + 0x40],ESI
00750E8E  3B 45 E4                  CMP EAX,dword ptr [EBP + -0x1c]
00750E91  0F 8C 25 FF FF FF         JL 0x00750dbc
00750E97  8B F8                     MOV EDI,EAX
00750E99  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00750E9C  E9 76 FD FF FF            JMP 0x00750c17
LAB_00750ea1:
00750EA1  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00750EA4  EB 27                     JMP 0x00750ecd
LAB_00750ea6:
00750EA6  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
00750EA9  EB 22                     JMP 0x00750ecd
LAB_00750eab:
00750EAB  7E 20                     JLE 0x00750ecd
00750EAD  81 4D D4 00 00 FF FF      OR dword ptr [EBP + -0x2c],0xffff0000
00750EB4  EB 17                     JMP 0x00750ecd
LAB_00750ecd:
00750ECD  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00750ED0  85 C0                     TEST EAX,EAX
00750ED2  74 17                     JZ 0x00750eeb
00750ED4  68 8F 00 00 00            PUSH 0x8f
00750ED9  68 CC 2A 7F 00            PUSH 0x7f2acc
00750EDE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00750EE4  52                        PUSH EDX
00750EE5  50                        PUSH EAX
00750EE6  E8 55 4F F5 FF            CALL 0x006a5e40
LAB_00750eeb:
00750EEB  8D 65 AC                  LEA ESP,[EBP + -0x54]
00750EEE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00750EF1  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00750EF8  5F                        POP EDI
00750EF9  5E                        POP ESI
00750EFA  5B                        POP EBX
00750EFB  8B E5                     MOV ESP,EBP
00750EFD  5D                        POP EBP
00750EFE  C2 08 00                  RET 0x8
