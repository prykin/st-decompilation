FUN_00731b40:
00731B40  55                        PUSH EBP
00731B41  8B EC                     MOV EBP,ESP
00731B43  83 EC 0C                  SUB ESP,0xc
00731B46  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00731B49  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00731B4C  2B 48 0C                  SUB ECX,dword ptr [EAX + 0xc]
00731B4F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00731B52  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00731B55  C1 EA 0F                  SHR EDX,0xf
00731B58  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00731B5B  B8 00 00 00 80            MOV EAX,0x80000000
00731B60  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00731B63  D3 E8                     SHR EAX,CL
00731B65  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00731B68  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00731B6B  23 D0                     AND EDX,EAX
00731B6D  85 D2                     TEST EDX,EDX
00731B6F  75 20                     JNZ 0x00731b91
00731B71  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00731B74  83 E0 0F                  AND EAX,0xf
00731B77  85 C0                     TEST EAX,EAX
00731B79  75 16                     JNZ 0x00731b91
00731B7B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00731B7E  81 E1 FF 0F 00 00         AND ECX,0xfff
00731B84  85 C9                     TEST ECX,ECX
00731B86  74 09                     JZ 0x00731b91
00731B88  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
00731B8F  EB 07                     JMP 0x00731b98
LAB_00731b91:
00731B91  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_00731b98:
00731B98  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00731B9B  8B E5                     MOV ESP,EBP
00731B9D  5D                        POP EBP
00731B9E  C3                        RET
