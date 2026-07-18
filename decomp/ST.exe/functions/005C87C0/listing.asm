SettMapTy::PaintSC:
005C87C0  55                        PUSH EBP
005C87C1  8B EC                     MOV EBP,ESP
005C87C3  83 EC 48                  SUB ESP,0x48
005C87C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C87CB  56                        PUSH ESI
005C87CC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005C87CF  57                        PUSH EDI
005C87D0  8D 55 BC                  LEA EDX,[EBP + -0x44]
005C87D3  8D 4D B8                  LEA ECX,[EBP + -0x48]
005C87D6  6A 00                     PUSH 0x0
005C87D8  52                        PUSH EDX
005C87D9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005C87DC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C87E2  E8 09 50 16 00            CALL 0x0072d7f0
005C87E7  8B F0                     MOV ESI,EAX
005C87E9  83 C4 08                  ADD ESP,0x8
005C87EC  85 F6                     TEST ESI,ESI
005C87EE  0F 85 5F 01 00 00         JNZ 0x005c8953
005C87F4  A1 B6 87 80 00            MOV EAX,[0x008087b6]
005C87F9  85 C0                     TEST EAX,EAX
005C87FB  0F 84 43 01 00 00         JZ 0x005c8944
005C8801  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C8806  8B 88 F4 02 00 00         MOV ECX,dword ptr [EAX + 0x2f4]
005C880C  85 C9                     TEST ECX,ECX
005C880E  0F 84 30 01 00 00         JZ 0x005c8944
005C8814  8B 0D C4 87 80 00         MOV ECX,dword ptr [0x008087c4]
005C881A  8B 80 F0 02 00 00         MOV EAX,dword ptr [EAX + 0x2f0]
005C8820  33 D2                     XOR EDX,EDX
005C8822  81 E1 FF FF 00 00         AND ECX,0xffff
005C8828  66 8B 15 C2 87 80 00      MOV DX,word ptr [0x008087c2]
005C882F  51                        PUSH ECX
005C8830  52                        PUSH EDX
005C8831  68 8B 00 00 00            PUSH 0x8b
005C8836  6A 14                     PUSH 0x14
005C8838  6A 14                     PUSH 0x14
005C883A  50                        PUSH EAX
005C883B  E8 B0 FB 11 00            CALL 0x006e83f0
005C8840  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C8845  83 C4 18                  ADD ESP,0x18
005C8848  8B 88 F4 02 00 00         MOV ECX,dword ptr [EAX + 0x2f4]
005C884E  8B 90 F0 02 00 00         MOV EDX,dword ptr [EAX + 0x2f0]
005C8854  56                        PUSH ESI
005C8855  56                        PUSH ESI
005C8856  51                        PUSH ECX
005C8857  6A 14                     PUSH 0x14
005C8859  6A 14                     PUSH 0x14
005C885B  56                        PUSH ESI
005C885C  52                        PUSH EDX
005C885D  E8 DE CB 0E 00            CALL 0x006b5440
005C8862  A0 4B 73 80 00            MOV AL,[0x0080734b]
005C8867  84 C0                     TEST AL,AL
005C8869  0F 84 B9 00 00 00         JZ 0x005c8928
005C886F  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005C8872  8B 87 84 1F 00 00         MOV EAX,dword ptr [EDI + 0x1f84]
005C8878  85 C0                     TEST EAX,EAX
005C887A  0F 84 A8 00 00 00         JZ 0x005c8928
005C8880  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005C8883  85 C9                     TEST ECX,ECX
005C8885  0F 8E 9D 00 00 00         JLE 0x005c8928
005C888B  3B F1                     CMP ESI,ECX
LAB_005c888d:
005C888D  73 0D                     JNC 0x005c889c
005C888F  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005C8892  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005C8895  0F AF CE                  IMUL ECX,ESI
005C8898  03 CA                     ADD ECX,EDX
005C889A  EB 02                     JMP 0x005c889e
LAB_005c889c:
005C889C  33 C9                     XOR ECX,ECX
LAB_005c889e:
005C889E  85 C9                     TEST ECX,ECX
005C88A0  74 74                     JZ 0x005c8916
005C88A2  80 39 00                  CMP byte ptr [ECX],0x0
005C88A5  74 6F                     JZ 0x005c8916
005C88A7  8A 41 04                  MOV AL,byte ptr [ECX + 0x4]
005C88AA  84 C0                     TEST AL,AL
005C88AC  74 68                     JZ 0x005c8916
005C88AE  8A 41 02                  MOV AL,byte ptr [ECX + 0x2]
005C88B1  3C FF                     CMP AL,0xff
005C88B3  74 61                     JZ 0x005c8916
005C88B5  25 FF 00 00 00            AND EAX,0xff
005C88BA  83 F8 07                  CMP EAX,0x7
005C88BD  77 3F                     JA 0x005c88fe
switchD_005c88bf::switchD:
005C88BF  FF 24 85 98 89 5C 00      JMP dword ptr [EAX*0x4 + 0x5c8998]
switchD_005c88bf::caseD_0:
005C88C6  B8 FC 00 00 00            MOV EAX,0xfc
005C88CB  EB 36                     JMP 0x005c8903
switchD_005c88bf::caseD_1:
005C88CD  B8 FA 00 00 00            MOV EAX,0xfa
005C88D2  EB 2F                     JMP 0x005c8903
switchD_005c88bf::caseD_2:
005C88D4  B8 FB 00 00 00            MOV EAX,0xfb
005C88D9  EB 28                     JMP 0x005c8903
switchD_005c88bf::caseD_3:
005C88DB  B8 F9 00 00 00            MOV EAX,0xf9
005C88E0  EB 21                     JMP 0x005c8903
switchD_005c88bf::caseD_4:
005C88E2  B8 FD 00 00 00            MOV EAX,0xfd
005C88E7  EB 1A                     JMP 0x005c8903
switchD_005c88bf::caseD_5:
005C88E9  B8 FE 00 00 00            MOV EAX,0xfe
005C88EE  EB 13                     JMP 0x005c8903
switchD_005c88bf::caseD_6:
005C88F0  B8 F3 00 00 00            MOV EAX,0xf3
005C88F5  EB 0C                     JMP 0x005c8903
switchD_005c88bf::caseD_7:
005C88F7  B8 07 00 00 00            MOV EAX,0x7
005C88FC  EB 05                     JMP 0x005c8903
switchD_005c88bf::default:
005C88FE  B8 FF 00 00 00            MOV EAX,0xff
LAB_005c8903:
005C8903  50                        PUSH EAX
005C8904  8B 41 58                  MOV EAX,dword ptr [ECX + 0x58]
005C8907  8B 49 54                  MOV ECX,dword ptr [ECX + 0x54]
005C890A  6A 04                     PUSH 0x4
005C890C  50                        PUSH EAX
005C890D  51                        PUSH ECX
005C890E  E8 4D FB 11 00            CALL 0x006e8460
005C8913  83 C4 10                  ADD ESP,0x10
LAB_005c8916:
005C8916  8B 87 84 1F 00 00         MOV EAX,dword ptr [EDI + 0x1f84]
005C891C  46                        INC ESI
005C891D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005C8920  3B F1                     CMP ESI,ECX
005C8922  0F 8C 65 FF FF FF         JL 0x005c888d
LAB_005c8928:
005C8928  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005C892E  8B 82 EC 02 00 00         MOV EAX,dword ptr [EDX + 0x2ec]
005C8934  85 C0                     TEST EAX,EAX
005C8936  7C 0C                     JL 0x005c8944
005C8938  50                        PUSH EAX
005C8939  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C893E  50                        PUSH EAX
005C893F  E8 8C AC 0E 00            CALL 0x006b35d0
LAB_005c8944:
005C8944  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005C8947  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C894D  5F                        POP EDI
005C894E  5E                        POP ESI
005C894F  8B E5                     MOV ESP,EBP
005C8951  5D                        POP EBP
005C8952  C3                        RET
LAB_005c8953:
005C8953  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005C8956  68 24 D2 7C 00            PUSH 0x7cd224
005C895B  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C8960  56                        PUSH ESI
005C8961  6A 00                     PUSH 0x0
005C8963  68 AC 04 00 00            PUSH 0x4ac
005C8968  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C896D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C8973  E8 58 4B 0E 00            CALL 0x006ad4d0
005C8978  83 C4 18                  ADD ESP,0x18
005C897B  85 C0                     TEST EAX,EAX
005C897D  74 01                     JZ 0x005c8980
005C897F  CC                        INT3
LAB_005c8980:
005C8980  68 AC 04 00 00            PUSH 0x4ac
005C8985  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C898A  6A 00                     PUSH 0x0
005C898C  56                        PUSH ESI
005C898D  E8 AE D4 0D 00            CALL 0x006a5e40
005C8992  5F                        POP EDI
005C8993  5E                        POP ESI
005C8994  8B E5                     MOV ESP,EBP
005C8996  5D                        POP EBP
005C8997  C3                        RET
