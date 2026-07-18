FUN_0075e750:
0075E750  55                        PUSH EBP
0075E751  8B EC                     MOV EBP,ESP
0075E753  51                        PUSH ECX
0075E754  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075E757  56                        PUSH ESI
0075E758  57                        PUSH EDI
0075E759  8B 88 BA 01 00 00         MOV ECX,dword ptr [EAX + 0x1ba]
0075E75F  8B 78 68                  MOV EDI,dword ptr [EAX + 0x68]
0075E762  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075E765  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0075E768  8B 71 18                  MOV ESI,dword ptr [ECX + 0x18]
0075E76B  85 C0                     TEST EAX,EAX
0075E76D  7E 55                     JLE 0x0075e7c4
0075E76F  53                        PUSH EBX
0075E770  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075E773  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0075e776:
0075E776  8B 0B                     MOV ECX,dword ptr [EBX]
0075E778  85 FF                     TEST EDI,EDI
0075E77A  76 3B                     JBE 0x0075e7b7
LAB_0075e77c:
0075E77C  33 D2                     XOR EDX,EDX
0075E77E  33 C0                     XOR EAX,EAX
0075E780  8A 51 01                  MOV DL,byte ptr [ECX + 0x1]
0075E783  8A 41 02                  MOV AL,byte ptr [ECX + 0x2]
0075E786  C1 EA 02                  SHR EDX,0x2
0075E789  C1 E2 05                  SHL EDX,0x5
0075E78C  C1 E8 03                  SHR EAX,0x3
0075E78F  03 D0                     ADD EDX,EAX
0075E791  33 C0                     XOR EAX,EAX
0075E793  8A 01                     MOV AL,byte ptr [ECX]
0075E795  C1 E8 03                  SHR EAX,0x3
0075E798  8B 04 86                  MOV EAX,dword ptr [ESI + EAX*0x4]
0075E79B  66 FF 04 50               INC word ptr [EAX + EDX*0x2]
0075E79F  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0075E7A2  66 8B 10                  MOV DX,word ptr [EAX]
0075E7A5  66 85 D2                  TEST DX,DX
0075E7A8  77 04                     JA 0x0075e7ae
0075E7AA  4A                        DEC EDX
0075E7AB  66 89 10                  MOV word ptr [EAX],DX
LAB_0075e7ae:
0075E7AE  83 C1 03                  ADD ECX,0x3
0075E7B1  4F                        DEC EDI
0075E7B2  75 C8                     JNZ 0x0075e77c
0075E7B4  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0075e7b7:
0075E7B7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075E7BA  83 C3 04                  ADD EBX,0x4
0075E7BD  48                        DEC EAX
0075E7BE  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075E7C1  75 B3                     JNZ 0x0075e776
0075E7C3  5B                        POP EBX
LAB_0075e7c4:
0075E7C4  5F                        POP EDI
0075E7C5  5E                        POP ESI
0075E7C6  8B E5                     MOV ESP,EBP
0075E7C8  5D                        POP EBP
0075E7C9  C2 10 00                  RET 0x10
