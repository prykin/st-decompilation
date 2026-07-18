FUN_005fb540:
005FB540  55                        PUSH EBP
005FB541  8B EC                     MOV EBP,ESP
005FB543  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FB546  56                        PUSH ESI
005FB547  66 8B 71 41               MOV SI,word ptr [ECX + 0x41]
005FB54B  66 0F BE D0               MOVSX DX,AL
005FB54F  66 03 F2                  ADD SI,DX
005FB552  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005FB555  66 89 32                  MOV word ptr [EDX],SI
005FB558  33 D2                     XOR EDX,EDX
005FB55A  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
005FB55D  8A D4                     MOV DL,AH
005FB55F  66 0F BE D2               MOVSX DX,DL
005FB563  66 03 51 43               ADD DX,word ptr [ECX + 0x43]
005FB567  C1 E8 10                  SHR EAX,0x10
005FB56A  66 89 16                  MOV word ptr [ESI],DX
005FB56D  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005FB570  66 0F BE D0               MOVSX DX,AL
005FB574  66 03 51 45               ADD DX,word ptr [ECX + 0x45]
005FB578  66 89 16                  MOV word ptr [ESI],DX
005FB57B  33 D2                     XOR EDX,EDX
005FB57D  0F BF 49 45               MOVSX ECX,word ptr [ECX + 0x45]
005FB581  8A D4                     MOV DL,AH
005FB583  5E                        POP ESI
005FB584  0F BE C2                  MOVSX EAX,DL
005FB587  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005FB58A  03 C1                     ADD EAX,ECX
005FB58C  89 02                     MOV dword ptr [EDX],EAX
005FB58E  33 C0                     XOR EAX,EAX
005FB590  5D                        POP EBP
005FB591  C2 14 00                  RET 0x14
