AiFltClassTy::sub_0065FA60:
0065FA60  55                        PUSH EBP
0065FA61  8B EC                     MOV EBP,ESP
0065FA63  83 EC 58                  SUB ESP,0x58
0065FA66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0065FA6B  53                        PUSH EBX
0065FA6C  56                        PUSH ESI
0065FA6D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0065FA70  57                        PUSH EDI
0065FA71  8D 55 AC                  LEA EDX,[EBP + -0x54]
0065FA74  8D 4D A8                  LEA ECX,[EBP + -0x58]
0065FA77  6A 00                     PUSH 0x0
0065FA79  52                        PUSH EDX
0065FA7A  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0065FA81  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0065FA84  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065FA8A  E8 61 DD 0C 00            CALL 0x0072d7f0
0065FA8F  83 C4 08                  ADD ESP,0x8
0065FA92  85 C0                     TEST EAX,EAX
0065FA94  0F 85 C6 00 00 00         JNZ 0x0065fb60
0065FA9A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0065FA9D  83 E8 00                  SUB EAX,0x0
0065FAA0  0F 84 88 00 00 00         JZ 0x0065fb2e
0065FAA6  48                        DEC EAX
0065FAA7  74 3B                     JZ 0x0065fae4
0065FAA9  48                        DEC EAX
0065FAAA  0F 85 A3 00 00 00         JNZ 0x0065fb53
0065FAB0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065FAB6  85 C9                     TEST ECX,ECX
0065FAB8  0F 84 95 00 00 00         JZ 0x0065fb53
0065FABE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0065FAC1  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0065FAC4  6A FF                     PUSH -0x1
0065FAC6  6A 00                     PUSH 0x0
0065FAC8  50                        PUSH EAX
0065FAC9  8A 42 24                  MOV AL,byte ptr [EDX + 0x24]
0065FACC  50                        PUSH EAX
0065FACD  E8 43 19 DA FF            CALL 0x00401415
0065FAD2  8B F8                     MOV EDI,EAX
0065FAD4  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0065FAD7  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0065FADA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0065FADF  E9 88 00 00 00            JMP 0x0065fb6c
LAB_0065fae4:
0065FAE4  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0065FAE7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0065FAEA  8B 8B 84 02 00 00         MOV ECX,dword ptr [EBX + 0x284]
0065FAF0  85 C9                     TEST ECX,ECX
0065FAF2  74 0D                     JZ 0x0065fb01
0065FAF4  56                        PUSH ESI
0065FAF5  E8 79 1A DA FF            CALL 0x00401573
0065FAFA  8B F8                     MOV EDI,EAX
0065FAFC  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0065FAFF  EB 03                     JMP 0x0065fb04
LAB_0065fb01:
0065FB01  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_0065fb04:
0065FB04  85 FF                     TEST EDI,EDI
0065FB06  75 4E                     JNZ 0x0065fb56
0065FB08  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065FB0E  85 C9                     TEST ECX,ECX
0065FB10  74 44                     JZ 0x0065fb56
0065FB12  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0065FB15  6A FF                     PUSH -0x1
0065FB17  57                        PUSH EDI
0065FB18  56                        PUSH ESI
0065FB19  52                        PUSH EDX
0065FB1A  E8 F6 18 DA FF            CALL 0x00401415
0065FB1F  8B F8                     MOV EDI,EAX
0065FB21  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0065FB24  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0065FB27  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0065FB2C  EB 3E                     JMP 0x0065fb6c
LAB_0065fb2e:
0065FB2E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0065FB31  8B 88 84 02 00 00         MOV ECX,dword ptr [EAX + 0x284]
0065FB37  85 C9                     TEST ECX,ECX
0065FB39  74 18                     JZ 0x0065fb53
0065FB3B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0065FB3E  52                        PUSH EDX
0065FB3F  E8 2F 1A DA FF            CALL 0x00401573
0065FB44  8B F8                     MOV EDI,EAX
0065FB46  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0065FB49  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0065FB4C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0065FB51  EB 19                     JMP 0x0065fb6c
LAB_0065fb53:
0065FB53  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_0065fb56:
0065FB56  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0065FB59  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0065FB5E  EB 0C                     JMP 0x0065fb6c
LAB_0065fb60:
0065FB60  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0065FB63  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0065FB66  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_0065fb6c:
0065FB6C  85 FF                     TEST EDI,EDI
0065FB6E  0F 84 E9 00 00 00         JZ 0x0065fc5d
0065FB74  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0065FB77  85 C0                     TEST EAX,EAX
0065FB79  75 0B                     JNZ 0x0065fb86
0065FB7B  57                        PUSH EDI
0065FB7C  E8 8F E5 04 00            CALL 0x006ae110
0065FB81  33 FF                     XOR EDI,EDI
0065FB83  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
LAB_0065fb86:
0065FB86  85 FF                     TEST EDI,EDI
0065FB88  0F 84 CF 00 00 00         JZ 0x0065fc5d
0065FB8E  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0065FB91  85 F6                     TEST ESI,ESI
0065FB93  0F 84 C4 00 00 00         JZ 0x0065fc5d
0065FB99  66 83 7E 06 00            CMP word ptr [ESI + 0x6],0x0
0065FB9E  0F 8E B9 00 00 00         JLE 0x0065fc5d
0065FBA4  66 83 7E 08 00            CMP word ptr [ESI + 0x8],0x0
0065FBA9  0F 8E AE 00 00 00         JLE 0x0065fc5d
0065FBAF  66 83 7E 0A 00            CMP word ptr [ESI + 0xa],0x0
0065FBB4  0F 8E A3 00 00 00         JLE 0x0065fc5d
0065FBBA  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
0065FBBD  4B                        DEC EBX
0065FBBE  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0065FBC1  0F 88 96 00 00 00         JS 0x0065fc5d
LAB_0065fbc7:
0065FBC7  3B 5F 0C                  CMP EBX,dword ptr [EDI + 0xc]
0065FBCA  73 0D                     JNC 0x0065fbd9
0065FBCC  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0065FBCF  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0065FBD2  0F AF C3                  IMUL EAX,EBX
0065FBD5  03 C1                     ADD EAX,ECX
0065FBD7  EB 02                     JMP 0x0065fbdb
LAB_0065fbd9:
0065FBD9  33 C0                     XOR EAX,EAX
LAB_0065fbdb:
0065FBDB  8B 00                     MOV EAX,dword ptr [EAX]
0065FBDD  85 C0                     TEST EAX,EAX
0065FBDF  74 72                     JZ 0x0065fc53
0065FBE1  8D 55 FA                  LEA EDX,[EBP + -0x6]
0065FBE4  8D 4D FC                  LEA ECX,[EBP + -0x4]
0065FBE7  52                        PUSH EDX
0065FBE8  8D 55 FE                  LEA EDX,[EBP + -0x2]
0065FBEB  51                        PUSH ECX
0065FBEC  52                        PUSH EDX
0065FBED  8B C8                     MOV ECX,EAX
0065FBEF  E8 D1 1C DA FF            CALL 0x004018c5
0065FBF4  66 8B 06                  MOV AX,word ptr [ESI]
0065FBF7  66 39 45 FE               CMP word ptr [EBP + -0x2],AX
0065FBFB  7C 4A                     JL 0x0065fc47
0065FBFD  66 8B 56 02               MOV DX,word ptr [ESI + 0x2]
0065FC01  66 39 55 FC               CMP word ptr [EBP + -0x4],DX
0065FC05  7C 40                     JL 0x0065fc47
0065FC07  66 8B 4E 04               MOV CX,word ptr [ESI + 0x4]
0065FC0B  66 39 4D FA               CMP word ptr [EBP + -0x6],CX
0065FC0F  7C 33                     JL 0x0065fc44
0065FC11  0F BF 5E 06               MOVSX EBX,word ptr [ESI + 0x6]
0065FC15  0F BF C0                  MOVSX EAX,AX
0065FC18  03 C3                     ADD EAX,EBX
0065FC1A  0F BF 5D FE               MOVSX EBX,word ptr [EBP + -0x2]
0065FC1E  3B D8                     CMP EBX,EAX
0065FC20  7D 22                     JGE 0x0065fc44
0065FC22  0F BF 46 08               MOVSX EAX,word ptr [ESI + 0x8]
0065FC26  0F BF D2                  MOVSX EDX,DX
0065FC29  03 D0                     ADD EDX,EAX
0065FC2B  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
0065FC2F  3B C2                     CMP EAX,EDX
0065FC31  7D 11                     JGE 0x0065fc44
0065FC33  0F BF 56 0A               MOVSX EDX,word ptr [ESI + 0xa]
0065FC37  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
0065FC3B  0F BF C9                  MOVSX ECX,CX
0065FC3E  03 CA                     ADD ECX,EDX
0065FC40  3B C1                     CMP EAX,ECX
0065FC42  7C 0C                     JL 0x0065fc50
LAB_0065fc44:
0065FC44  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_0065fc47:
0065FC47  53                        PUSH EBX
0065FC48  57                        PUSH EDI
0065FC49  E8 22 10 05 00            CALL 0x006b0c70
0065FC4E  EB 03                     JMP 0x0065fc53
LAB_0065fc50:
0065FC50  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_0065fc53:
0065FC53  4B                        DEC EBX
0065FC54  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0065FC57  0F 89 6A FF FF FF         JNS 0x0065fbc7
LAB_0065fc5d:
0065FC5D  8B C7                     MOV EAX,EDI
0065FC5F  5F                        POP EDI
0065FC60  5E                        POP ESI
0065FC61  5B                        POP EBX
0065FC62  8B E5                     MOV ESP,EBP
0065FC64  5D                        POP EBP
0065FC65  C2 0C 00                  RET 0xc
