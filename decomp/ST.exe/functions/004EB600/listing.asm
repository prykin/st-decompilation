FUN_004eb600:
004EB600  55                        PUSH EBP
004EB601  8B EC                     MOV EBP,ESP
004EB603  56                        PUSH ESI
004EB604  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004EB607  8B D6                     MOV EDX,ESI
004EB609  33 C0                     XOR EAX,EAX
004EB60B  89 02                     MOV dword ptr [EDX],EAX
004EB60D  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
004EB610  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
004EB613  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
004EB616  8B 81 AC 05 00 00         MOV EAX,dword ptr [ECX + 0x5ac]
004EB61C  83 F8 52                  CMP EAX,0x52
004EB61F  74 05                     JZ 0x004eb626
004EB621  83 F8 5F                  CMP EAX,0x5f
004EB624  75 74                     JNZ 0x004eb69a
LAB_004eb626:
004EB626  53                        PUSH EBX
004EB627  57                        PUSH EDI
004EB628  33 D2                     XOR EDX,EDX
LAB_004eb62a:
004EB62A  C7 45 08 02 00 00 00      MOV dword ptr [EBP + 0x8],0x2
LAB_004eb631:
004EB631  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004EB634  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
004EB637  8D 3C F8                  LEA EDI,[EAX + EDI*0x8]
004EB63A  8D 3C 78                  LEA EDI,[EAX + EDI*0x2]
004EB63D  C1 E7 04                  SHL EDI,0x4
004EB640  03 F8                     ADD EDI,EAX
004EB642  8D 04 7A                  LEA EAX,[EDX + EDI*0x2]
004EB645  8B B8 C2 57 7F 00         MOV EDI,dword ptr [EAX + 0x7f57c2]
004EB64B  8B 80 C6 57 7F 00         MOV EAX,dword ptr [EAX + 0x7f57c6]
004EB651  3B F8                     CMP EDI,EAX
004EB653  75 07                     JNZ 0x004eb65c
004EB655  66 C7 06 00 00            MOV word ptr [ESI],0x0
004EB65A  EB 0B                     JMP 0x004eb667
LAB_004eb65c:
004EB65C  33 DB                     XOR EBX,EBX
004EB65E  3B F8                     CMP EDI,EAX
004EB660  0F 9E C3                  SETLE BL
004EB663  43                        INC EBX
004EB664  66 89 1E                  MOV word ptr [ESI],BX
LAB_004eb667:
004EB667  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004EB66A  83 C2 08                  ADD EDX,0x8
004EB66D  83 C6 04                  ADD ESI,0x4
004EB670  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
004EB673  8D 3C F8                  LEA EDI,[EAX + EDI*0x8]
004EB676  8D 3C 78                  LEA EDI,[EAX + EDI*0x2]
004EB679  C1 E7 04                  SHL EDI,0x4
004EB67C  03 F8                     ADD EDI,EAX
004EB67E  66 8B 84 7A BA 57 7F 00   MOV AX,word ptr [EDX + EDI*0x2 + 0x7f57ba]
004EB686  66 89 46 FE               MOV word ptr [ESI + -0x2],AX
004EB68A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004EB68D  48                        DEC EAX
004EB68E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
004EB691  75 9E                     JNZ 0x004eb631
004EB693  83 FA 20                  CMP EDX,0x20
004EB696  7C 92                     JL 0x004eb62a
004EB698  5F                        POP EDI
004EB699  5B                        POP EBX
LAB_004eb69a:
004EB69A  5E                        POP ESI
004EB69B  5D                        POP EBP
004EB69C  C2 04 00                  RET 0x4
