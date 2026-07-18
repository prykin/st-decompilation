FUN_006c2460:
006C2460  55                        PUSH EBP
006C2461  8B EC                     MOV EBP,ESP
006C2463  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006C2466  53                        PUSH EBX
006C2467  56                        PUSH ESI
006C2468  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C246B  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
006C246E  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006C2471  C1 E6 04                  SHL ESI,0x4
006C2474  03 F0                     ADD ESI,EAX
006C2476  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C2479  C1 E6 02                  SHL ESI,0x2
006C247C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C247F  57                        PUSH EDI
006C2480  8D BE F8 4F 85 00         LEA EDI,[ESI + 0x854ff8]
006C2486  25 FF 00 00 00            AND EAX,0xff
006C248B  80 CF 20                  OR BH,0x20
006C248E  6A 3E                     PUSH 0x3e
006C2490  89 57 30                  MOV dword ptr [EDI + 0x30],EDX
006C2493  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C2496  89 47 2C                  MOV dword ptr [EDI + 0x2c],EAX
006C2499  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C249C  89 57 34                  MOV dword ptr [EDI + 0x34],EDX
006C249F  8D 57 4C                  LEA EDX,[EDI + 0x4c]
006C24A2  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
006C24A5  89 4F 20                  MOV dword ptr [EDI + 0x20],ECX
006C24A8  89 5F 04                  MOV dword ptr [EDI + 0x4],EBX
006C24AB  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006C24AE  52                        PUSH EDX
006C24AF  51                        PUSH ECX
006C24B0  50                        PUSH EAX
006C24B1  E8 7A 24 01 00            CALL 0x006d4930
006C24B6  85 C0                     TEST EAX,EAX
006C24B8  75 3C                     JNZ 0x006c24f6
006C24BA  66 8B 4F 4C               MOV CX,word ptr [EDI + 0x4c]
006C24BE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C24C1  66 49                     DEC CX
006C24C3  66 F7 D9                  NEG CX
006C24C6  1B C9                     SBB ECX,ECX
006C24C8  83 E1 24                  AND ECX,0x24
006C24CB  83 C1 1A                  ADD ECX,0x1a
006C24CE  03 CA                     ADD ECX,EDX
006C24D0  F6 C3 04                  TEST BL,0x4
006C24D3  89 4F 28                  MOV dword ptr [EDI + 0x28],ECX
006C24D6  75 11                     JNZ 0x006c24e9
006C24D8  57                        PUSH EDI
006C24D9  E8 12 D7 FF FF            CALL 0x006bfbf0
006C24DE  85 C0                     TEST EAX,EAX
006C24E0  75 14                     JNZ 0x006c24f6
006C24E2  5F                        POP EDI
006C24E3  5E                        POP ESI
006C24E4  5B                        POP EBX
006C24E5  5D                        POP EBP
006C24E6  C2 1C 00                  RET 0x1c
LAB_006c24e9:
006C24E9  8B 07                     MOV EAX,dword ptr [EDI]
006C24EB  0C 21                     OR AL,0x21
006C24ED  89 07                     MOV dword ptr [EDI],EAX
006C24EF  5F                        POP EDI
006C24F0  5E                        POP ESI
006C24F1  5B                        POP EBX
006C24F2  5D                        POP EBP
006C24F3  C2 1C 00                  RET 0x1c
LAB_006c24f6:
006C24F6  8B 86 04 50 85 00         MOV EAX,dword ptr [ESI + 0x855004]
006C24FC  85 C0                     TEST EAX,EAX
006C24FE  74 12                     JZ 0x006c2512
006C2500  8B 10                     MOV EDX,dword ptr [EAX]
006C2502  50                        PUSH EAX
006C2503  FF 52 48                  CALL dword ptr [EDX + 0x48]
006C2506  8B B6 04 50 85 00         MOV ESI,dword ptr [ESI + 0x855004]
006C250C  56                        PUSH ESI
006C250D  8B 06                     MOV EAX,dword ptr [ESI]
006C250F  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_006c2512:
006C2512  B9 31 00 00 00            MOV ECX,0x31
006C2517  33 C0                     XOR EAX,EAX
006C2519  F3 AB                     STOSD.REP ES:EDI
006C251B  5F                        POP EDI
006C251C  5E                        POP ESI
006C251D  5B                        POP EBX
006C251E  5D                        POP EBP
006C251F  C2 1C 00                  RET 0x1c
