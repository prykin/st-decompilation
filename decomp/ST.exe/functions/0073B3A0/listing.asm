_GetPrimaryLen:
0073B3A0  55                        PUSH EBP
0073B3A1  8B EC                     MOV EBP,ESP
0073B3A3  83 EC 08                  SUB ESP,0x8
0073B3A6  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0073B3AD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073B3B0  8A 08                     MOV CL,byte ptr [EAX]
0073B3B2  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0073B3B5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073B3B8  83 C2 01                  ADD EDX,0x1
0073B3BB  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0073b3be:
0073B3BE  0F BE 45 FC               MOVSX EAX,byte ptr [EBP + -0x4]
0073B3C2  83 F8 41                  CMP EAX,0x41
0073B3C5  7C 09                     JL 0x0073b3d0
0073B3C7  0F BE 4D FC               MOVSX ECX,byte ptr [EBP + -0x4]
0073B3CB  83 F9 5A                  CMP ECX,0x5a
0073B3CE  7E 12                     JLE 0x0073b3e2
LAB_0073b3d0:
0073B3D0  0F BE 55 FC               MOVSX EDX,byte ptr [EBP + -0x4]
0073B3D4  83 FA 61                  CMP EDX,0x61
0073B3D7  7C 25                     JL 0x0073b3fe
0073B3D9  0F BE 45 FC               MOVSX EAX,byte ptr [EBP + -0x4]
0073B3DD  83 F8 7A                  CMP EAX,0x7a
0073B3E0  7F 1C                     JG 0x0073b3fe
LAB_0073b3e2:
0073B3E2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073B3E5  83 C1 01                  ADD ECX,0x1
0073B3E8  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0073B3EB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073B3EE  8A 02                     MOV AL,byte ptr [EDX]
0073B3F0  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0073B3F3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073B3F6  83 C1 01                  ADD ECX,0x1
0073B3F9  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0073B3FC  EB C0                     JMP 0x0073b3be
LAB_0073b3fe:
0073B3FE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073B401  8B E5                     MOV ESP,EBP
0073B403  5D                        POP EBP
0073B404  C3                        RET
