FUN_0075d490:
0075D490  55                        PUSH EBP
0075D491  8B EC                     MOV EBP,ESP
0075D493  83 EC 14                  SUB ESP,0x14
0075D496  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075D499  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075D49C  53                        PUSH EBX
0075D49D  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075D4A0  56                        PUSH ESI
0075D4A1  8B 31                     MOV ESI,dword ptr [ECX]
0075D4A3  8B 83 B2 01 00 00         MOV EAX,dword ptr [EBX + 0x1b2]
0075D4A9  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0075D4AC  03 C1                     ADD EAX,ECX
0075D4AE  33 C9                     XOR ECX,ECX
0075D4B0  33 D2                     XOR EDX,EDX
0075D4B2  57                        PUSH EDI
0075D4B3  8A 88 96 00 00 00         MOV CL,byte ptr [EAX + 0x96]
0075D4B9  8A 90 8C 00 00 00         MOV DL,byte ptr [EAX + 0x8c]
0075D4BF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0075D4C2  8B 8B 26 01 00 00         MOV ECX,dword ptr [EBX + 0x126]
0075D4C8  8B FA                     MOV EDI,EDX
0075D4CA  33 C0                     XOR EAX,EAX
0075D4CC  85 C9                     TEST ECX,ECX
0075D4CE  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0075D4D1  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0075D4D4  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0075D4D7  0F 8E A6 00 00 00         JLE 0x0075d583
0075D4DD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075D4E0  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0075D4E3  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
LAB_0075d4e6:
0075D4E6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075D4E9  8B 11                     MOV EDX,dword ptr [ECX]
0075D4EB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075D4EE  8B 31                     MOV ESI,dword ptr [ECX]
0075D4F0  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
0075D4F3  03 CE                     ADD ECX,ESI
0075D4F5  3B F1                     CMP ESI,ECX
0075D4F7  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0075D4FA  73 3D                     JNC 0x0075d539
LAB_0075d4fc:
0075D4FC  8A 02                     MOV AL,byte ptr [EDX]
0075D4FE  42                        INC EDX
0075D4FF  85 FF                     TEST EDI,EDI
0075D501  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075D504  7E 2C                     JLE 0x0075d532
0075D506  8A D8                     MOV BL,AL
0075D508  8B CF                     MOV ECX,EDI
0075D50A  8A FB                     MOV BH,BL
0075D50C  8B D1                     MOV EDX,ECX
0075D50E  8B C3                     MOV EAX,EBX
0075D510  8B FE                     MOV EDI,ESI
0075D512  C1 E0 10                  SHL EAX,0x10
0075D515  66 8B C3                  MOV AX,BX
0075D518  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075D51B  C1 E9 02                  SHR ECX,0x2
0075D51E  F3 AB                     STOSD.REP ES:EDI
0075D520  8B CA                     MOV ECX,EDX
0075D522  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075D525  83 E1 03                  AND ECX,0x3
0075D528  F3 AA                     STOSB.REP ES:EDI
0075D52A  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0075D52D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0075D530  03 F7                     ADD ESI,EDI
LAB_0075d532:
0075D532  3B F1                     CMP ESI,ECX
0075D534  72 C6                     JC 0x0075d4fc
0075D536  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0075d539:
0075D539  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075D53C  83 F9 01                  CMP ECX,0x1
0075D53F  7E 1B                     JLE 0x0075d55c
0075D541  8B 53 68                  MOV EDX,dword ptr [EBX + 0x68]
0075D544  49                        DEC ECX
0075D545  52                        PUSH EDX
0075D546  51                        PUSH ECX
0075D547  8D 48 01                  LEA ECX,[EAX + 0x1]
0075D54A  51                        PUSH ECX
0075D54B  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0075D54E  51                        PUSH ECX
0075D54F  50                        PUSH EAX
0075D550  51                        PUSH ECX
0075D551  E8 5A C9 FF FF            CALL 0x00759eb0
0075D556  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0075D559  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0075d55c:
0075D55C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0075D55F  03 C1                     ADD EAX,ECX
0075D561  83 C2 04                  ADD EDX,0x4
0075D564  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0075D567  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0075D56A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075D56D  C1 E1 02                  SHL ECX,0x2
0075D570  03 D1                     ADD EDX,ECX
0075D572  8B 8B 26 01 00 00         MOV ECX,dword ptr [EBX + 0x126]
0075D578  3B C1                     CMP EAX,ECX
0075D57A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0075D57D  0F 8C 63 FF FF FF         JL 0x0075d4e6
LAB_0075d583:
0075D583  5F                        POP EDI
0075D584  5E                        POP ESI
0075D585  5B                        POP EBX
0075D586  8B E5                     MOV ESP,EBP
0075D588  5D                        POP EBP
0075D589  C2 10 00                  RET 0x10
