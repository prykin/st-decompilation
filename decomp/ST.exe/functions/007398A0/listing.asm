fix_grouping:
007398A0  55                        PUSH EBP
007398A1  8B EC                     MOV EBP,ESP
007398A3  51                        PUSH ECX
LAB_007398a4:
007398A4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007398A7  0F BE 08                  MOVSX ECX,byte ptr [EAX]
007398AA  85 C9                     TEST ECX,ECX
007398AC  74 6B                     JZ 0x00739919
007398AE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007398B1  0F BE 02                  MOVSX EAX,byte ptr [EDX]
007398B4  83 F8 30                  CMP EAX,0x30
007398B7  7C 24                     JL 0x007398dd
007398B9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007398BC  0F BE 11                  MOVSX EDX,byte ptr [ECX]
007398BF  83 FA 39                  CMP EDX,0x39
007398C2  7F 19                     JG 0x007398dd
007398C4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007398C7  0F BE 08                  MOVSX ECX,byte ptr [EAX]
007398CA  83 E9 30                  SUB ECX,0x30
007398CD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007398D0  88 0A                     MOV byte ptr [EDX],CL
007398D2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007398D5  83 C0 01                  ADD EAX,0x1
007398D8  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
007398DB  EB 3A                     JMP 0x00739917
LAB_007398dd:
007398DD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007398E0  0F BE 11                  MOVSX EDX,byte ptr [ECX]
007398E3  83 FA 3B                  CMP EDX,0x3b
007398E6  75 26                     JNZ 0x0073990e
007398E8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007398EB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007398ee:
007398EE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007398F1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007398F4  8A 42 01                  MOV AL,byte ptr [EDX + 0x1]
007398F7  88 01                     MOV byte ptr [ECX],AL
007398F9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007398FC  83 C1 01                  ADD ECX,0x1
007398FF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00739902  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00739905  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00739908  85 C0                     TEST EAX,EAX
0073990A  75 E2                     JNZ 0x007398ee
0073990C  EB 09                     JMP 0x00739917
LAB_0073990e:
0073990E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00739911  83 C1 01                  ADD ECX,0x1
00739914  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_00739917:
00739917  EB 8B                     JMP 0x007398a4
LAB_00739919:
00739919  8B E5                     MOV ESP,EBP
0073991B  5D                        POP EBP
0073991C  C3                        RET
