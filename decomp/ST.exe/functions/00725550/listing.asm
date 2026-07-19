mfPlaPtrTy:
00725550  55                        PUSH EBP
00725551  8B EC                     MOV EBP,ESP
00725553  83 EC 4C                  SUB ESP,0x4c
00725556  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0072555B  53                        PUSH EBX
0072555C  56                        PUSH ESI
0072555D  33 DB                     XOR EBX,EBX
0072555F  57                        PUSH EDI
00725560  8D 55 B8                  LEA EDX,[EBP + -0x48]
00725563  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00725566  53                        PUSH EBX
00725567  52                        PUSH EDX
00725568  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0072556B  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0072556E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00725571  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00725577  E8 74 82 00 00            CALL 0x0072d7f0
0072557C  8B F0                     MOV ESI,EAX
0072557E  83 C4 08                  ADD ESP,0x8
00725581  3B F3                     CMP ESI,EBX
00725583  0F 85 A2 00 00 00         JNZ 0x0072562b
00725589  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0072558C  3B FB                     CMP EDI,EBX
0072558E  75 14                     JNZ 0x007255a4
00725590  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00725595  6A 18                     PUSH 0x18
00725597  68 44 0C 7F 00            PUSH 0x7f0c44
0072559C  50                        PUSH EAX
0072559D  6A CC                     PUSH -0x34
0072559F  E8 9C 08 F8 FF            CALL 0x006a5e40
LAB_007255a4:
007255A4  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
007255A7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007255AA  53                        PUSH EBX
007255AB  51                        PUSH ECX
007255AC  57                        PUSH EDI
007255AD  E8 EE 00 00 00            CALL 0x007256a0
007255B2  8B F0                     MOV ESI,EAX
007255B4  83 C4 0C                  ADD ESP,0xc
007255B7  85 F6                     TEST ESI,ESI
007255B9  7D 12                     JGE 0x007255cd
007255BB  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
007255BE  33 C0                     XOR EAX,EAX
007255C0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007255C6  5F                        POP EDI
007255C7  5E                        POP ESI
007255C8  5B                        POP EBX
007255C9  8B E5                     MOV ESP,EBP
007255CB  5D                        POP EBP
007255CC  C3                        RET
LAB_007255cd:
007255CD  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007255D0  8D 45 FC                  LEA EAX,[EBP + -0x4]
007255D3  53                        PUSH EBX
007255D4  50                        PUSH EAX
007255D5  51                        PUSH ECX
007255D6  6A 0D                     PUSH 0xd
007255D8  8B CF                     MOV ECX,EDI
007255DA  E8 01 C7 FC FF            CALL 0x006f1ce0
007255DF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007255E2  85 C0                     TEST EAX,EAX
007255E4  75 10                     JNZ 0x007255f6
007255E6  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
007255E9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007255EF  5F                        POP EDI
007255F0  5E                        POP ESI
007255F1  5B                        POP EBX
007255F2  8B E5                     MOV ESP,EBP
007255F4  5D                        POP EBP
007255F5  C3                        RET
LAB_007255f6:
007255F6  85 F6                     TEST ESI,ESI
007255F8  7E 16                     JLE 0x00725610
LAB_007255fa:
007255FA  0F BF 48 11               MOVSX ECX,word ptr [EAX + 0x11]
007255FE  4E                        DEC ESI
007255FF  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
00725602  8D 4C 11 16               LEA ECX,[ECX + EDX*0x1 + 0x16]
00725606  8B D0                     MOV EDX,EAX
00725608  89 08                     MOV dword ptr [EAX],ECX
0072560A  8B C1                     MOV EAX,ECX
0072560C  75 EC                     JNZ 0x007255fa
0072560E  EB 03                     JMP 0x00725613
LAB_00725610:
00725610  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00725613:
00725613  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
00725619  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0072561C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00725621  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00725624  5F                        POP EDI
00725625  5E                        POP ESI
00725626  5B                        POP EBX
00725627  8B E5                     MOV ESP,EBP
00725629  5D                        POP EBP
0072562A  C3                        RET
LAB_0072562b:
0072562B  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0072562E  68 38 0C 7F 00            PUSH 0x7f0c38
00725633  68 CC 4C 7A 00            PUSH 0x7a4ccc
00725638  56                        PUSH ESI
00725639  53                        PUSH EBX
0072563A  6A 27                     PUSH 0x27
0072563C  68 44 0C 7F 00            PUSH 0x7f0c44
00725641  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00725647  E8 84 7E F8 FF            CALL 0x006ad4d0
0072564C  83 C4 18                  ADD ESP,0x18
0072564F  85 C0                     TEST EAX,EAX
00725651  74 01                     JZ 0x00725654
00725653  CC                        INT3
LAB_00725654:
00725654  8D 55 FC                  LEA EDX,[EBP + -0x4]
00725657  52                        PUSH EDX
00725658  E8 23 00 00 00            CALL 0x00725680
0072565D  83 C4 04                  ADD ESP,0x4
00725660  6A 2B                     PUSH 0x2b
00725662  68 44 0C 7F 00            PUSH 0x7f0c44
00725667  53                        PUSH EBX
00725668  56                        PUSH ESI
00725669  E8 D2 07 F8 FF            CALL 0x006a5e40
0072566E  5F                        POP EDI
0072566F  5E                        POP ESI
00725670  33 C0                     XOR EAX,EAX
00725672  5B                        POP EBX
00725673  8B E5                     MOV ESP,EBP
00725675  5D                        POP EBP
00725676  C3                        RET
