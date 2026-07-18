FUN_0053a540:
0053A540  55                        PUSH EBP
0053A541  8B EC                     MOV EBP,ESP
0053A543  51                        PUSH ECX
0053A544  53                        PUSH EBX
0053A545  56                        PUSH ESI
0053A546  8B F1                     MOV ESI,ECX
0053A548  57                        PUSH EDI
0053A549  B9 08 00 00 00            MOV ECX,0x8
0053A54E  33 C0                     XOR EAX,EAX
0053A550  8D 5E 18                  LEA EBX,[ESI + 0x18]
0053A553  8B FB                     MOV EDI,EBX
0053A555  F3 AB                     STOSD.REP ES:EDI
0053A557  C7 46 28 28 00 00 00      MOV dword ptr [ESI + 0x28],0x28
0053A55E  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0053A563  3C 08                     CMP AL,0x8
0053A565  76 0B                     JBE 0x0053a572
0053A567  33 C9                     XOR ECX,ECX
0053A569  8A C8                     MOV CL,AL
0053A56B  8B C1                     MOV EAX,ECX
0053A56D  83 E8 08                  SUB EAX,0x8
0053A570  EB 02                     JMP 0x0053a574
LAB_0053a572:
0053A572  33 C0                     XOR EAX,EAX
LAB_0053a574:
0053A574  8B 96 C5 01 00 00         MOV EDX,dword ptr [ESI + 0x1c5]
0053A57A  53                        PUSH EBX
0053A57B  52                        PUSH EDX
0053A57C  6A 02                     PUSH 0x2
0053A57E  8B CE                     MOV ECX,ESI
0053A580  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0053A583  E8 F8 BA 1A 00            CALL 0x006e6080
0053A588  BF 20 00 00 00            MOV EDI,0x20
0053A58D  8B 96 C5 01 00 00         MOV EDX,dword ptr [ESI + 0x1c5]
0053A593  89 7E 28                  MOV dword ptr [ESI + 0x28],EDI
0053A596  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
0053A59C  B0 08                     MOV AL,0x8
0053A59E  53                        PUSH EBX
0053A59F  3A C1                     CMP AL,CL
0053A5A1  52                        PUSH EDX
0053A5A2  1B C9                     SBB ECX,ECX
0053A5A4  6A 02                     PUSH 0x2
0053A5A6  F7 D9                     NEG ECX
0053A5A8  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
0053A5AB  8B CE                     MOV ECX,ESI
0053A5AD  E8 CE BA 1A 00            CALL 0x006e6080
0053A5B2  8B 86 C5 01 00 00         MOV EAX,dword ptr [ESI + 0x1c5]
0053A5B8  53                        PUSH EBX
0053A5B9  50                        PUSH EAX
0053A5BA  6A 02                     PUSH 0x2
0053A5BC  8B CE                     MOV ECX,ESI
0053A5BE  C7 46 28 22 00 00 00      MOV dword ptr [ESI + 0x28],0x22
0053A5C5  C7 46 2C 00 00 00 00      MOV dword ptr [ESI + 0x2c],0x0
0053A5CC  E8 AF BA 1A 00            CALL 0x006e6080
0053A5D1  32 C0                     XOR AL,AL
0053A5D3  89 7E 28                  MOV dword ptr [ESI + 0x28],EDI
0053A5D6  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
0053A5D9  8D BE A1 01 00 00         LEA EDI,[ESI + 0x1a1]
LAB_0053a5df:
0053A5DF  83 3F 00                  CMP dword ptr [EDI],0x0
0053A5E2  74 5C                     JZ 0x0053a640
0053A5E4  3A 05 AF 8A 80 00         CMP AL,byte ptr [0x00808aaf]
0053A5EA  73 10                     JNC 0x0053a5fc
0053A5EC  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
0053A5F1  84 C0                     TEST AL,AL
0053A5F3  75 07                     JNZ 0x0053a5fc
0053A5F5  B8 01 00 00 00            MOV EAX,0x1
0053A5FA  EB 02                     JMP 0x0053a5fe
LAB_0053a5fc:
0053A5FC  33 C0                     XOR EAX,EAX
LAB_0053a5fe:
0053A5FE  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0053A601  8B 4F E0                  MOV ECX,dword ptr [EDI + -0x20]
0053A604  53                        PUSH EBX
0053A605  51                        PUSH ECX
0053A606  6A 02                     PUSH 0x2
0053A608  8B CE                     MOV ECX,ESI
0053A60A  E8 71 BA 1A 00            CALL 0x006e6080
0053A60F  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
0053A612  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0053A617  3A D0                     CMP DL,AL
0053A619  73 10                     JNC 0x0053a62b
0053A61B  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0053A622  75 07                     JNZ 0x0053a62b
0053A624  B8 01 00 00 00            MOV EAX,0x1
0053A629  EB 02                     JMP 0x0053a62d
LAB_0053a62b:
0053A62B  33 C0                     XOR EAX,EAX
LAB_0053a62d:
0053A62D  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0053A630  8B 07                     MOV EAX,dword ptr [EDI]
0053A632  53                        PUSH EBX
0053A633  50                        PUSH EAX
0053A634  6A 02                     PUSH 0x2
0053A636  8B CE                     MOV ECX,ESI
0053A638  E8 43 BA 1A 00            CALL 0x006e6080
0053A63D  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
LAB_0053a640:
0053A640  FE C0                     INC AL
0053A642  83 C7 04                  ADD EDI,0x4
0053A645  3C 08                     CMP AL,0x8
0053A647  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
0053A64A  72 93                     JC 0x0053a5df
0053A64C  8B CE                     MOV ECX,ESI
0053A64E  E8 EF 8B EC FF            CALL 0x00403242
0053A653  5F                        POP EDI
0053A654  5E                        POP ESI
0053A655  5B                        POP EBX
0053A656  8B E5                     MOV ESP,EBP
0053A658  5D                        POP EBP
0053A659  C3                        RET
