FUN_005f0620:
005F0620  55                        PUSH EBP
005F0621  8B EC                     MOV EBP,ESP
005F0623  83 EC 20                  SUB ESP,0x20
005F0626  56                        PUSH ESI
005F0627  8B 35 BC 17 81 00         MOV ESI,dword ptr [0x008117bc]
005F062D  85 F6                     TEST ESI,ESI
005F062F  8B D1                     MOV EDX,ECX
005F0631  74 5F                     JZ 0x005f0692
005F0633  57                        PUSH EDI
005F0634  B9 08 00 00 00            MOV ECX,0x8
005F0639  33 C0                     XOR EAX,EAX
005F063B  8D 7D E0                  LEA EDI,[EBP + -0x20]
005F063E  F3 AB                     STOSD.REP ES:EDI
005F0640  8B 82 B1 02 00 00         MOV EAX,dword ptr [EDX + 0x2b1]
005F0646  5F                        POP EDI
005F0647  83 F8 05                  CMP EAX,0x5
005F064A  77 46                     JA 0x005f0692
switchD_005f064c::switchD:
005F064C  FF 24 85 98 06 5F 00      JMP dword ptr [EAX*0x4 + 0x5f0698]
switchD_005f064c::caseD_3:
005F0653  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
005F0657  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
005F065B  B8 DD 5D 00 00            MOV EAX,0x5ddd
005F0660  EB 0D                     JMP 0x005f066f
switchD_005f064c::caseD_0:
005F0662  66 8B 4A 32               MOV CX,word ptr [EDX + 0x32]
005F0666  B8 D8 5D 00 00            MOV EAX,0x5dd8
005F066B  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
LAB_005f066f:
005F066F  66 8B 8A A3 02 00 00      MOV CX,word ptr [EDX + 0x2a3]
005F0676  66 8B 92 AB 02 00 00      MOV DX,word ptr [EDX + 0x2ab]
005F067D  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
005F0681  8D 4D E0                  LEA ECX,[EBP + -0x20]
005F0684  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
005F0688  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005F068B  8B 06                     MOV EAX,dword ptr [ESI]
005F068D  51                        PUSH ECX
005F068E  8B CE                     MOV ECX,ESI
005F0690  FF 10                     CALL dword ptr [EAX]
switchD_005f064c::default:
005F0692  5E                        POP ESI
005F0693  8B E5                     MOV ESP,EBP
005F0695  5D                        POP EBP
005F0696  C3                        RET
