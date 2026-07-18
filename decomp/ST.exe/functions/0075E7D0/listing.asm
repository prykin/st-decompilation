FUN_0075e7d0:
0075E7D0  55                        PUSH EBP
0075E7D1  8B EC                     MOV EBP,ESP
0075E7D3  83 EC 10                  SUB ESP,0x10
0075E7D6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075E7D9  56                        PUSH ESI
0075E7DA  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0075E7DD  8B 88 BA 01 00 00         MOV ECX,dword ptr [EAX + 0x1ba]
0075E7E3  85 F6                     TEST ESI,ESI
0075E7E5  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0075E7E8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0075E7EB  8B 50 68                  MOV EDX,dword ptr [EAX + 0x68]
0075E7EE  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0075E7F1  0F 8E 8E 00 00 00         JLE 0x0075e885
0075E7F7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075E7FA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075E7FD  2B C8                     SUB ECX,EAX
0075E7FF  53                        PUSH EBX
0075E800  57                        PUSH EDI
0075E801  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075E804  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0075E807  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
LAB_0075e80a:
0075E80A  8B 38                     MOV EDI,dword ptr [EAX]
0075E80C  8B 34 01                  MOV ESI,dword ptr [ECX + EAX*0x1]
0075E80F  85 D2                     TEST EDX,EDX
0075E811  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
0075E814  76 5E                     JBE 0x0075e874
0075E816  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_0075e819:
0075E819  33 C0                     XOR EAX,EAX
0075E81B  33 C9                     XOR ECX,ECX
0075E81D  8A 06                     MOV AL,byte ptr [ESI]
0075E81F  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
0075E822  C1 E8 03                  SHR EAX,0x3
0075E825  46                        INC ESI
0075E826  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0075E829  C1 E9 02                  SHR ECX,0x2
0075E82C  8B 1C 83                  MOV EBX,dword ptr [EBX + EAX*0x4]
0075E82F  46                        INC ESI
0075E830  33 D2                     XOR EDX,EDX
0075E832  8B F9                     MOV EDI,ECX
0075E834  8A 16                     MOV DL,byte ptr [ESI]
0075E836  C1 EA 03                  SHR EDX,0x3
0075E839  C1 E7 05                  SHL EDI,0x5
0075E83C  03 FA                     ADD EDI,EDX
0075E83E  46                        INC ESI
0075E83F  66 83 3C 7B 00            CMP word ptr [EBX + EDI*0x2],0x0
0075E844  8D 3C 7B                  LEA EDI,[EBX + EDI*0x2]
0075E847  75 0C                     JNZ 0x0075e855
0075E849  52                        PUSH EDX
0075E84A  51                        PUSH ECX
0075E84B  50                        PUSH EAX
0075E84C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075E84F  50                        PUSH EAX
0075E850  E8 3B 00 00 00            CALL 0x0075e890
LAB_0075e855:
0075E855  8A 0F                     MOV CL,byte ptr [EDI]
0075E857  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075E85A  FE C9                     DEC CL
0075E85C  88 08                     MOV byte ptr [EAX],CL
0075E85E  40                        INC EAX
0075E85F  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0075E862  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075E865  48                        DEC EAX
0075E866  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0075E869  75 AE                     JNZ 0x0075e819
0075E86B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0075E86E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075E871  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_0075e874:
0075E874  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075E877  83 C0 04                  ADD EAX,0x4
0075E87A  4E                        DEC ESI
0075E87B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075E87E  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
0075E881  75 87                     JNZ 0x0075e80a
0075E883  5F                        POP EDI
0075E884  5B                        POP EBX
LAB_0075e885:
0075E885  5E                        POP ESI
0075E886  8B E5                     MOV ESP,EBP
0075E888  5D                        POP EBP
0075E889  C2 10 00                  RET 0x10
