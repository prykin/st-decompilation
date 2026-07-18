FUN_006d2560:
006D2560  55                        PUSH EBP
006D2561  8B EC                     MOV EBP,ESP
006D2563  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D2566  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D2569  8B 08                     MOV ECX,dword ptr [EAX]
006D256B  85 C9                     TEST ECX,ECX
006D256D  74 0A                     JZ 0x006d2579
006D256F  56                        PUSH ESI
006D2570  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
006D2573  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
006D2576  5E                        POP ESI
006D2577  EB 06                     JMP 0x006d257f
LAB_006d2579:
006D2579  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006D257C  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
LAB_006d257f:
006D257F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006D2582  85 C9                     TEST ECX,ECX
006D2584  74 08                     JZ 0x006d258e
006D2586  8B 10                     MOV EDX,dword ptr [EAX]
006D2588  89 11                     MOV dword ptr [ECX],EDX
006D258A  5D                        POP EBP
006D258B  C2 08 00                  RET 0x8
LAB_006d258e:
006D258E  8B 00                     MOV EAX,dword ptr [EAX]
006D2590  89 02                     MOV dword ptr [EDX],EAX
006D2592  5D                        POP EBP
006D2593  C2 08 00                  RET 0x8
