FUN_004e6f00:
004E6F00  55                        PUSH EBP
004E6F01  8B EC                     MOV EBP,ESP
004E6F03  83 EC 10                  SUB ESP,0x10
004E6F06  53                        PUSH EBX
004E6F07  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E6F0A  56                        PUSH ESI
004E6F0B  33 F6                     XOR ESI,ESI
004E6F0D  3B DE                     CMP EBX,ESI
004E6F0F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004E6F12  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
004E6F15  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004E6F18  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004E6F1B  7C 7E                     JL 0x004e6f9b
004E6F1D  83 FB 08                  CMP EBX,0x8
004E6F20  7D 79                     JGE 0x004e6f9b
004E6F22  57                        PUSH EDI
004E6F23  53                        PUSH EBX
004E6F24  E8 8E DA F1 FF            CALL 0x004049b7
004E6F29  25 FF 00 00 00            AND EAX,0xff
004E6F2E  48                        DEC EAX
004E6F2F  33 FF                     XOR EDI,EDI
004E6F31  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_004e6f34:
004E6F34  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E6F37  8B 0C 85 04 FC 7B 00      MOV ECX,dword ptr [EAX*0x4 + 0x7bfc04]
004E6F3E  03 CF                     ADD ECX,EDI
004E6F40  74 1C                     JZ 0x004e6f5e
004E6F42  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004E6F45  56                        PUSH ESI
004E6F46  53                        PUSH EBX
004E6F47  E8 1F A9 F1 FF            CALL 0x0040186b
004E6F4C  33 D2                     XOR EDX,EDX
004E6F4E  8A 96 D8 8F 79 00         MOV DL,byte ptr [ESI + 0x798fd8]
004E6F54  3B C2                     CMP EAX,EDX
004E6F56  7C 03                     JL 0x004e6f5b
004E6F58  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_004e6f5b:
004E6F5B  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_004e6f5e:
004E6F5E  81 C7 9B 00 00 00         ADD EDI,0x9b
004E6F64  46                        INC ESI
004E6F65  81 FF D9 5D 00 00         CMP EDI,0x5dd9
004E6F6B  72 C7                     JC 0x004e6f34
004E6F6D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E6F70  5F                        POP EDI
004E6F71  85 C9                     TEST ECX,ECX
004E6F73  74 1B                     JZ 0x004e6f90
004E6F75  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004E6F78  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E6F7B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E6F7E  C1 E0 02                  SHL EAX,0x2
004E6F81  99                        CDQ
004E6F82  F7 F9                     IDIV ECX
004E6F84  83 F8 64                  CMP EAX,0x64
004E6F87  7E 14                     JLE 0x004e6f9d
004E6F89  C7 45 F4 64 00 00 00      MOV dword ptr [EBP + -0xc],0x64
LAB_004e6f90:
004E6F90  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004E6F93  5E                        POP ESI
004E6F94  5B                        POP EBX
004E6F95  8B E5                     MOV ESP,EBP
004E6F97  5D                        POP EBP
004E6F98  C2 04 00                  RET 0x4
LAB_004e6f9b:
004E6F9B  33 C0                     XOR EAX,EAX
LAB_004e6f9d:
004E6F9D  5E                        POP ESI
004E6F9E  5B                        POP EBX
004E6F9F  8B E5                     MOV ESP,EBP
004E6FA1  5D                        POP EBP
004E6FA2  C2 04 00                  RET 0x4
