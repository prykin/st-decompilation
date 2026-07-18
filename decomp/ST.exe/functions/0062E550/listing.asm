FUN_0062e550:
0062E550  55                        PUSH EBP
0062E551  8B EC                     MOV EBP,ESP
0062E553  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0062E556  53                        PUSH EBX
0062E557  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0062E55A  56                        PUSH ESI
0062E55B  57                        PUSH EDI
0062E55C  50                        PUSH EAX
0062E55D  8B F9                     MOV EDI,ECX
0062E55F  53                        PUSH EBX
0062E560  E8 49 63 DD FF            CALL 0x004048ae
0062E565  8B F0                     MOV ESI,EAX
0062E567  85 F6                     TEST ESI,ESI
0062E569  7C 5C                     JL 0x0062e5c7
0062E56B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0062E56E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062E571  56                        PUSH ESI
0062E572  51                        PUSH ECX
0062E573  52                        PUSH EDX
0062E574  53                        PUSH EBX
0062E575  8B CF                     MOV ECX,EDI
0062E577  E8 C2 6E DD FF            CALL 0x0040543e
0062E57C  85 C0                     TEST EAX,EAX
0062E57E  7C 4A                     JL 0x0062e5ca
0062E580  8B 7C 9F 50               MOV EDI,dword ptr [EDI + EBX*0x4 + 0x50]
0062E584  3B 77 0C                  CMP ESI,dword ptr [EDI + 0xc]
0062E587  73 0D                     JNC 0x0062e596
0062E589  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0062E58C  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
0062E58F  0F AF CE                  IMUL ECX,ESI
0062E592  03 CA                     ADD ECX,EDX
0062E594  EB 02                     JMP 0x0062e598
LAB_0062e596:
0062E596  33 C9                     XOR ECX,ECX
LAB_0062e598:
0062E598  33 D2                     XOR EDX,EDX
0062E59A  8D 71 10                  LEA ESI,[ECX + 0x10]
LAB_0062e59d:
0062E59D  83 3E 00                  CMP dword ptr [ESI],0x0
0062E5A0  76 10                     JBE 0x0062e5b2
0062E5A2  42                        INC EDX
0062E5A3  83 C6 04                  ADD ESI,0x4
0062E5A6  83 FA 03                  CMP EDX,0x3
0062E5A9  7C F2                     JL 0x0062e59d
0062E5AB  5F                        POP EDI
0062E5AC  5E                        POP ESI
0062E5AD  5B                        POP EBX
0062E5AE  5D                        POP EBP
0062E5AF  C2 0C 00                  RET 0xc
LAB_0062e5b2:
0062E5B2  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0062E5B5  5F                        POP EDI
0062E5B6  89 74 91 10               MOV dword ptr [ECX + EDX*0x4 + 0x10],ESI
0062E5BA  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0062E5BD  42                        INC EDX
0062E5BE  5E                        POP ESI
0062E5BF  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
0062E5C2  5B                        POP EBX
0062E5C3  5D                        POP EBP
0062E5C4  C2 0C 00                  RET 0xc
LAB_0062e5c7:
0062E5C7  83 C8 FF                  OR EAX,0xffffffff
LAB_0062e5ca:
0062E5CA  5F                        POP EDI
0062E5CB  5E                        POP ESI
0062E5CC  5B                        POP EBX
0062E5CD  5D                        POP EBP
0062E5CE  C2 0C 00                  RET 0xc
