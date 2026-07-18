FUN_006dac70:
006DAC70  55                        PUSH EBP
006DAC71  8B EC                     MOV EBP,ESP
006DAC73  51                        PUSH ECX
006DAC74  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006DAC77  83 C0 07                  ADD EAX,0x7
006DAC7A  99                        CDQ
006DAC7B  83 E2 07                  AND EDX,0x7
006DAC7E  03 C2                     ADD EAX,EDX
006DAC80  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006DAC83  C1 F8 03                  SAR EAX,0x3
006DAC86  85 D2                     TEST EDX,EDX
006DAC88  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DAC8B  7E 5F                     JLE 0x006dacec
006DAC8D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DAC90  B8 80 00 00 00            MOV EAX,0x80
006DAC95  83 E1 07                  AND ECX,0x7
006DAC98  53                        PUSH EBX
006DAC99  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006DAC9C  56                        PUSH ESI
006DAC9D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006DACA0  57                        PUSH EDI
006DACA1  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006DACA4  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006DACA7  D3 F8                     SAR EAX,CL
006DACA9  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006dacac:
006DACAC  85 FF                     TEST EDI,EDI
006DACAE  8B D3                     MOV EDX,EBX
006DACB0  8A C8                     MOV CL,AL
006DACB2  7E 20                     JLE 0x006dacd4
006DACB4  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
LAB_006dacb7:
006DACB7  84 0A                     TEST byte ptr [EDX],CL
006DACB9  74 05                     JZ 0x006dacc0
006DACBB  8A 45 24                  MOV AL,byte ptr [EBP + 0x24]
006DACBE  88 06                     MOV byte ptr [ESI],AL
LAB_006dacc0:
006DACC0  D0 E9                     SHR CL,0x1
006DACC2  75 03                     JNZ 0x006dacc7
006DACC4  B1 80                     MOV CL,0x80
006DACC6  42                        INC EDX
LAB_006dacc7:
006DACC7  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006DACCA  46                        INC ESI
006DACCB  48                        DEC EAX
006DACCC  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006DACCF  75 E6                     JNZ 0x006dacb7
006DACD1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
LAB_006dacd4:
006DACD4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006DACD7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006DACDA  2B CF                     SUB ECX,EDI
006DACDC  03 DA                     ADD EBX,EDX
006DACDE  03 F1                     ADD ESI,ECX
006DACE0  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006DACE3  49                        DEC ECX
006DACE4  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006DACE7  75 C3                     JNZ 0x006dacac
006DACE9  5F                        POP EDI
006DACEA  5E                        POP ESI
006DACEB  5B                        POP EBX
LAB_006dacec:
006DACEC  8B E5                     MOV ESP,EBP
006DACEE  5D                        POP EBP
006DACEF  C2 20 00                  RET 0x20
