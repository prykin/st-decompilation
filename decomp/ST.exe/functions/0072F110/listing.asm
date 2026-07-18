__makepath:
0072F110  55                        PUSH EBP
0072F111  8B EC                     MOV EBP,ESP
0072F113  51                        PUSH ECX
0072F114  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0072F118  74 2C                     JZ 0x0072f146
0072F11A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072F11D  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0072F120  85 C9                     TEST ECX,ECX
0072F122  74 22                     JZ 0x0072f146
0072F124  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F127  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072F12A  8A 08                     MOV CL,byte ptr [EAX]
0072F12C  88 0A                     MOV byte ptr [EDX],CL
0072F12E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F131  83 C2 01                  ADD EDX,0x1
0072F134  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0072F137  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F13A  C6 00 3A                  MOV byte ptr [EAX],0x3a
0072F13D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072F140  83 C1 01                  ADD ECX,0x1
0072F143  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_0072f146:
0072F146  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0072F149  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0072F14C  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0072F150  74 68                     JZ 0x0072f1ba
0072F152  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072F155  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0072F158  85 C9                     TEST ECX,ECX
0072F15A  74 5E                     JZ 0x0072f1ba
LAB_0072f15c:
0072F15C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F15F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072F162  8A 08                     MOV CL,byte ptr [EAX]
0072F164  88 0A                     MOV byte ptr [EDX],CL
0072F166  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F169  83 C2 01                  ADD EDX,0x1
0072F16C  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0072F16F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072F172  83 C0 01                  ADD EAX,0x1
0072F175  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072F178  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072F17B  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0072F17E  85 D2                     TEST EDX,EDX
0072F180  75 DA                     JNZ 0x0072f15c
0072F182  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072F185  50                        PUSH EAX
0072F186  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0072F189  51                        PUSH ECX
0072F18A  E8 51 9A 00 00            CALL 0x00738be0
0072F18F  83 C4 08                  ADD ESP,0x8
0072F192  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072F195  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072F198  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0072F19B  83 F8 2F                  CMP EAX,0x2f
0072F19E  74 1A                     JZ 0x0072f1ba
0072F1A0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072F1A3  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0072F1A6  83 FA 5C                  CMP EDX,0x5c
0072F1A9  74 0F                     JZ 0x0072f1ba
0072F1AB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F1AE  C6 00 5C                  MOV byte ptr [EAX],0x5c
0072F1B1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072F1B4  83 C1 01                  ADD ECX,0x1
0072F1B7  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_0072f1ba:
0072F1BA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0072F1BD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0072F1C0  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0072F1C4  74 28                     JZ 0x0072f1ee
LAB_0072f1c6:
0072F1C6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072F1C9  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0072F1CC  85 C9                     TEST ECX,ECX
0072F1CE  74 1E                     JZ 0x0072f1ee
0072F1D0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F1D3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072F1D6  8A 08                     MOV CL,byte ptr [EAX]
0072F1D8  88 0A                     MOV byte ptr [EDX],CL
0072F1DA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F1DD  83 C2 01                  ADD EDX,0x1
0072F1E0  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0072F1E3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072F1E6  83 C0 01                  ADD EAX,0x1
0072F1E9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072F1EC  EB D8                     JMP 0x0072f1c6
LAB_0072f1ee:
0072F1EE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0072F1F1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0072F1F4  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0072F1F8  74 4E                     JZ 0x0072f248
0072F1FA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072F1FD  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0072F200  85 C0                     TEST EAX,EAX
0072F202  74 1A                     JZ 0x0072f21e
0072F204  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072F207  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0072F20A  83 FA 2E                  CMP EDX,0x2e
0072F20D  74 0F                     JZ 0x0072f21e
0072F20F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F212  C6 00 2E                  MOV byte ptr [EAX],0x2e
0072F215  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072F218  83 C1 01                  ADD ECX,0x1
0072F21B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_0072f21e:
0072F21E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F221  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072F224  8A 08                     MOV CL,byte ptr [EAX]
0072F226  88 0A                     MOV byte ptr [EDX],CL
0072F228  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F22B  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0072F22E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072F231  83 C1 01                  ADD ECX,0x1
0072F234  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0072F237  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072F23A  83 C2 01                  ADD EDX,0x1
0072F23D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0072F240  85 C0                     TEST EAX,EAX
0072F242  74 02                     JZ 0x0072f246
0072F244  EB D8                     JMP 0x0072f21e
LAB_0072f246:
0072F246  EB 06                     JMP 0x0072f24e
LAB_0072f248:
0072F248  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072F24B  C6 00 00                  MOV byte ptr [EAX],0x0
LAB_0072f24e:
0072F24E  8B E5                     MOV ESP,EBP
0072F250  5D                        POP EBP
0072F251  C3                        RET
