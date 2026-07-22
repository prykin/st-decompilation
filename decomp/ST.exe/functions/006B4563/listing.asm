FUN_006b4563:
006B4563  8B 65 E8                  MOV ESP,dword ptr [EBP + -0x18]
006B4566  C7 45 E4 FB FF FF FF      MOV dword ptr [EBP + -0x1c],0xfffffffb
006B456D  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006B4574  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_006b4577:
006B4577  56                        PUSH ESI
006B4578  E8 03 74 00 00            CALL 0x006bb980
006B457D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_006b4580:
006B4580  3D A0 00 76 88            CMP EAX,0x887600a0
006B4585  74 07                     JZ 0x006b458e
006B4587  3D AE 01 76 88            CMP EAX,0x887601ae
006B458C  75 07                     JNZ 0x006b4595
LAB_006b458e:
006B458E  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
LAB_006b4595:
006B4595  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B459C  74 4D                     JZ 0x006b45eb
006B459E  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B45A4  56                        PUSH ESI
006B45A5  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006B45AB  EB 3E                     JMP 0x006b45eb
LAB_006b45eb:
006B45EB  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
006B45EE  85 F6                     TEST ESI,ESI
006B45F0  74 2C                     JZ 0x006b461e
006B45F2  68 84 00 00 00            PUSH 0x84
006B45F7  68 F0 DA 7E 00            PUSH 0x7edaf0
006B45FC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B4602  52                        PUSH EDX
006B4603  56                        PUSH ESI
006B4604  E8 37 18 FF FF            CALL 0x006a5e40
006B4609  8B C6                     MOV EAX,ESI
006B460B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B460E  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B4615  5F                        POP EDI
006B4616  5E                        POP ESI
006B4617  5B                        POP EBX
006B4618  8B E5                     MOV ESP,EBP
006B461A  5D                        POP EBP
006B461B  C2 24 00                  RET 0x24
LAB_006b461e:
006B461E  33 C0                     XOR EAX,EAX
006B4620  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B4623  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B462A  5F                        POP EDI
006B462B  5E                        POP ESI
006B462C  5B                        POP EBX
006B462D  8B E5                     MOV ESP,EBP
006B462F  5D                        POP EBP
006B4630  C2 24 00                  RET 0x24
