FUN_006daed0:
006DAED0  55                        PUSH EBP
006DAED1  8B EC                     MOV EBP,ESP
006DAED3  83 EC 08                  SUB ESP,0x8
006DAED6  53                        PUSH EBX
006DAED7  56                        PUSH ESI
006DAED8  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006DAEDB  57                        PUSH EDI
006DAEDC  8D 04 B5 00 00 00 00      LEA EAX,[ESI*0x4 + 0x0]
006DAEE3  83 C0 03                  ADD EAX,0x3
006DAEE6  24 FC                     AND AL,0xfc
006DAEE8  E8 53 2B 05 00            CALL 0x0072da40
006DAEED  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006DAEF0  8B D4                     MOV EDX,ESP
006DAEF2  8B C3                     MOV EAX,EBX
006DAEF4  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006DAEF7  D1 F8                     SAR EAX,0x1
006DAEF9  F7 D8                     NEG EAX
006DAEFB  85 F6                     TEST ESI,ESI
006DAEFD  B9 FE FF FF FF            MOV ECX,0xfffffffe
006DAF02  7E 19                     JLE 0x006daf1d
006DAF04  8B FE                     MOV EDI,ESI
LAB_006daf06:
006DAF06  85 C0                     TEST EAX,EAX
006DAF08  7F 09                     JG 0x006daf13
LAB_006daf0a:
006DAF0A  03 C6                     ADD EAX,ESI
006DAF0C  83 C1 02                  ADD ECX,0x2
006DAF0F  85 C0                     TEST EAX,EAX
006DAF11  7E F7                     JLE 0x006daf0a
LAB_006daf13:
006DAF13  89 0A                     MOV dword ptr [EDX],ECX
006DAF15  2B C3                     SUB EAX,EBX
006DAF17  83 C2 04                  ADD EDX,0x4
006DAF1A  4F                        DEC EDI
006DAF1B  75 E9                     JNZ 0x006daf06
LAB_006daf1d:
006DAF1D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006DAF20  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DAF23  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006DAF26  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006DAF29  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006DAF2C  D1 E8                     SHR EAX,0x1
006DAF2E  F7 D8                     NEG EAX
006DAF30  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006DAF33  2B 75 1C                  SUB ESI,dword ptr [EBP + 0x1c]
LAB_006daf36:
006DAF36  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006DAF39  0B C0                     OR EAX,EAX
006DAF3B  7F 08                     JG 0x006daf45
LAB_006daf3d:
006DAF3D  03 75 1C                  ADD ESI,dword ptr [EBP + 0x1c]
006DAF40  03 45 14                  ADD EAX,dword ptr [EBP + 0x14]
006DAF43  7E F8                     JLE 0x006daf3d
LAB_006daf45:
006DAF45  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006DAF48  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006DAF4B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006DAF4E  F7 C7 02 00 00 00         TEST EDI,0x2
006DAF54  74 12                     JZ 0x006daf68
006DAF56  8B 03                     MOV EAX,dword ptr [EBX]
006DAF58  83 C3 04                  ADD EBX,0x4
006DAF5B  66 8B 04 06               MOV AX,word ptr [ESI + EAX*0x1]
006DAF5F  66 89 07                  MOV word ptr [EDI],AX
006DAF62  83 C7 02                  ADD EDI,0x2
006DAF65  49                        DEC ECX
006DAF66  7E 36                     JLE 0x006daf9e
LAB_006daf68:
006DAF68  83 E9 02                  SUB ECX,0x2
006DAF6B  7C 1D                     JL 0x006daf8a
LAB_006daf6d:
006DAF6D  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
006DAF70  66 8B 04 16               MOV AX,word ptr [ESI + EDX*0x1]
006DAF74  C1 E0 10                  SHL EAX,0x10
006DAF77  8B 13                     MOV EDX,dword ptr [EBX]
006DAF79  66 8B 04 16               MOV AX,word ptr [ESI + EDX*0x1]
006DAF7D  83 C3 08                  ADD EBX,0x8
006DAF80  89 07                     MOV dword ptr [EDI],EAX
006DAF82  83 C7 04                  ADD EDI,0x4
006DAF85  83 E9 02                  SUB ECX,0x2
006DAF88  7D E3                     JGE 0x006daf6d
LAB_006daf8a:
006DAF8A  83 C1 02                  ADD ECX,0x2
006DAF8D  74 0F                     JZ 0x006daf9e
006DAF8F  8B 03                     MOV EAX,dword ptr [EBX]
006DAF91  83 C3 04                  ADD EBX,0x4
006DAF94  66 8B 04 06               MOV AX,word ptr [ESI + EAX*0x1]
006DAF98  66 89 07                  MOV word ptr [EDI],AX
006DAF9B  83 C7 02                  ADD EDI,0x2
LAB_006daf9e:
006DAF9E  2B 7D 10                  SUB EDI,dword ptr [EBP + 0x10]
006DAFA1  2B 7D 10                  SUB EDI,dword ptr [EBP + 0x10]
006DAFA4  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006DAFA7  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006DAFAA  2B 55 24                  SUB EDX,dword ptr [EBP + 0x24]
006DAFAD  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006DAFB0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006DAFB3  48                        DEC EAX
006DAFB4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DAFB7  0F 8F 79 FF FF FF         JG 0x006daf36
006DAFBD  8D 65 EC                  LEA ESP,[EBP + -0x14]
006DAFC0  5F                        POP EDI
006DAFC1  5E                        POP ESI
006DAFC2  5B                        POP EBX
006DAFC3  8B E5                     MOV ESP,EBP
006DAFC5  5D                        POP EBP
006DAFC6  C2 20 00                  RET 0x20
