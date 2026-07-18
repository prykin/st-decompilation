FUN_004e7230:
004E7230  55                        PUSH EBP
004E7231  8B EC                     MOV EBP,ESP
004E7233  51                        PUSH ECX
004E7234  53                        PUSH EBX
004E7235  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E7238  56                        PUSH ESI
004E7239  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
004E723C  8B D1                     MOV EDX,ECX
004E723E  57                        PUSH EDI
004E723F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004E7242  B9 07 00 00 00            MOV ECX,0x7
004E7247  33 C0                     XOR EAX,EAX
004E7249  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004E724C  F3 AB                     STOSD.REP ES:EDI
004E724E  B9 07 00 00 00            MOV ECX,0x7
004E7253  8B FE                     MOV EDI,ESI
004E7255  85 DB                     TEST EBX,EBX
004E7257  F3 AB                     STOSD.REP ES:EDI
004E7259  0F 8C CC 00 00 00         JL 0x004e732b
004E725F  83 FB 08                  CMP EBX,0x8
004E7262  0F 8D C3 00 00 00         JGE 0x004e732b
004E7268  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E726B  85 FF                     TEST EDI,EDI
004E726D  0F 8C B8 00 00 00         JL 0x004e732b
004E7273  83 FF 03                  CMP EDI,0x3
004E7276  0F 8D AF 00 00 00         JGE 0x004e732b
004E727C  53                        PUSH EBX
004E727D  8B CA                     MOV ECX,EDX
004E727F  E8 33 D7 F1 FF            CALL 0x004049b7
004E7284  25 FF 00 00 00            AND EAX,0xff
004E7289  33 D2                     XOR EDX,EDX
004E728B  48                        DEC EAX
004E728C  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E728F  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
004E7292  8D 0C 47                  LEA ECX,[EDI + EAX*0x2]
004E7295  03 C1                     ADD EAX,ECX
004E7297  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E729A  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
004E729D  39 94 C9 BC 95 79 00      CMP dword ptr [ECX + ECX*0x8 + 0x7995bc],EDX
004E72A4  0F 8E 81 00 00 00         JLE 0x004e732b
004E72AA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E72AD  8B FE                     MOV EDI,ESI
004E72AF  8B CF                     MOV ECX,EDI
004E72B1  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004E72B4  8D B4 C0 BC 95 79 00      LEA ESI,[EAX + EAX*0x8 + 0x7995bc]
004E72BB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E72BE  2B C1                     SUB EAX,ECX
004E72C0  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_004e72c3:
004E72C3  83 7D 08 51               CMP dword ptr [EBP + 0x8],0x51
004E72C7  7D 62                     JGE 0x004e732b
004E72C9  8B 16                     MOV EDX,dword ptr [ESI]
004E72CB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E72CE  52                        PUSH EDX
004E72CF  53                        PUSH EBX
004E72D0  E8 96 A5 F1 FF            CALL 0x0040186b
004E72D5  33 C9                     XOR ECX,ECX
004E72D7  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
004E72DA  3B C1                     CMP EAX,ECX
004E72DC  7D 3C                     JGE 0x004e731a
004E72DE  8B 16                     MOV EDX,dword ptr [ESI]
004E72E0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E72E3  52                        PUSH EDX
004E72E4  53                        PUSH EBX
004E72E5  E8 65 DF F1 FF            CALL 0x0040524f
004E72EA  85 C0                     TEST EAX,EAX
004E72EC  74 2C                     JZ 0x004e731a
004E72EE  8B 06                     MOV EAX,dword ptr [ESI]
004E72F0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E72F3  50                        PUSH EAX
004E72F4  53                        PUSH EBX
004E72F5  E8 25 AB F1 FF            CALL 0x00401e1f
004E72FA  85 C0                     TEST EAX,EAX
004E72FC  75 1C                     JNZ 0x004e731a
004E72FE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E7301  8B 0E                     MOV ECX,dword ptr [ESI]
004E7303  89 0C 3A                  MOV dword ptr [EDX + EDI*0x1],ECX
004E7306  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
004E7309  89 07                     MOV dword ptr [EDI],EAX
004E730B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E730E  40                        INC EAX
004E730F  83 C7 04                  ADD EDI,0x4
004E7312  83 F8 07                  CMP EAX,0x7
004E7315  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004E7318  7D 11                     JGE 0x004e732b
LAB_004e731a:
004E731A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E731D  8B 46 05                  MOV EAX,dword ptr [ESI + 0x5]
004E7320  83 C6 05                  ADD ESI,0x5
004E7323  42                        INC EDX
004E7324  85 C0                     TEST EAX,EAX
004E7326  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E7329  7F 98                     JG 0x004e72c3
LAB_004e732b:
004E732B  5F                        POP EDI
004E732C  5E                        POP ESI
004E732D  5B                        POP EBX
004E732E  8B E5                     MOV ESP,EBP
004E7330  5D                        POP EBP
004E7331  C2 10 00                  RET 0x10
