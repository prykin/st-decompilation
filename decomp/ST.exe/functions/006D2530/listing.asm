FUN_006d2530:
006D2530  55                        PUSH EBP
006D2531  8B EC                     MOV EBP,ESP
006D2533  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D2536  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D2539  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006D253C  85 D2                     TEST EDX,EDX
006D253E  74 02                     JZ 0x006d2542
006D2540  89 0A                     MOV dword ptr [EDX],ECX
LAB_006d2542:
006D2542  83 38 00                  CMP dword ptr [EAX],0x0
006D2545  75 02                     JNZ 0x006d2549
006D2547  89 08                     MOV dword ptr [EAX],ECX
LAB_006d2549:
006D2549  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
006D254F  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006D2552  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006D2555  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006D2558  5D                        POP EBP
006D2559  C2 08 00                  RET 0x8
