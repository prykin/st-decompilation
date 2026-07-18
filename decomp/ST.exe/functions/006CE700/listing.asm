FUN_006ce700:
006CE700  55                        PUSH EBP
006CE701  8B EC                     MOV EBP,ESP
006CE703  56                        PUSH ESI
006CE704  57                        PUSH EDI
006CE705  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006CE708  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006CE70B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006CE70E  83 E9 04                  SUB ECX,0x4
006CE711  7C 15                     JL 0x006ce728
LAB_006ce713:
006CE713  8B 06                     MOV EAX,dword ptr [ESI]
006CE715  83 C6 04                  ADD ESI,0x4
006CE718  8B 17                     MOV EDX,dword ptr [EDI]
006CE71A  83 C7 04                  ADD EDI,0x4
006CE71D  89 56 FC                  MOV dword ptr [ESI + -0x4],EDX
006CE720  83 E9 04                  SUB ECX,0x4
006CE723  89 47 FC                  MOV dword ptr [EDI + -0x4],EAX
006CE726  7D EB                     JGE 0x006ce713
LAB_006ce728:
006CE728  80 F9 FC                  CMP CL,0xfc
006CE72B  7E 2E                     JLE 0x006ce75b
006CE72D  8A 06                     MOV AL,byte ptr [ESI]
006CE72F  46                        INC ESI
006CE730  8A 17                     MOV DL,byte ptr [EDI]
006CE732  47                        INC EDI
006CE733  88 56 FF                  MOV byte ptr [ESI + -0x1],DL
006CE736  80 F9 FD                  CMP CL,0xfd
006CE739  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006CE73C  7E 1D                     JLE 0x006ce75b
006CE73E  8A 06                     MOV AL,byte ptr [ESI]
006CE740  46                        INC ESI
006CE741  8A 17                     MOV DL,byte ptr [EDI]
006CE743  47                        INC EDI
006CE744  88 56 FF                  MOV byte ptr [ESI + -0x1],DL
006CE747  80 F9 FE                  CMP CL,0xfe
006CE74A  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
006CE74D  7E 0C                     JLE 0x006ce75b
006CE74F  8A 06                     MOV AL,byte ptr [ESI]
006CE751  46                        INC ESI
006CE752  8A 17                     MOV DL,byte ptr [EDI]
006CE754  47                        INC EDI
006CE755  88 56 FF                  MOV byte ptr [ESI + -0x1],DL
006CE758  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
LAB_006ce75b:
006CE75B  5F                        POP EDI
006CE75C  5E                        POP ESI
006CE75D  5D                        POP EBP
006CE75E  C2 0C 00                  RET 0xc
