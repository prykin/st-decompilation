FUN_006d46a0:
006D46A0  55                        PUSH EBP
006D46A1  8B EC                     MOV EBP,ESP
006D46A3  56                        PUSH ESI
006D46A4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D46A7  85 F6                     TEST ESI,ESI
006D46A9  0F 84 82 00 00 00         JZ 0x006d4731
006D46AF  53                        PUSH EBX
006D46B0  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006D46B6  8B D8                     MOV EBX,EAX
006D46B8  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006D46BB  A9 00 00 10 00            TEST EAX,0x100000
006D46C0  75 40                     JNZ 0x006d4702
006D46C2  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006D46C5  85 C0                     TEST EAX,EAX
006D46C7  74 07                     JZ 0x006d46d0
006D46C9  50                        PUSH EAX
006D46CA  FF 15 4C BB 85 00         CALL dword ptr [0x0085bb4c]
LAB_006d46d0:
006D46D0  F7 46 08 00 00 80 00      TEST dword ptr [ESI + 0x8],0x800000
006D46D7  74 29                     JZ 0x006d4702
006D46D9  57                        PUSH EDI
006D46DA  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006D46DD  85 FF                     TEST EDI,EDI
006D46DF  75 03                     JNZ 0x006d46e4
006D46E1  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
LAB_006d46e4:
006D46E4  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006D46E7  6A 00                     PUSH 0x0
006D46E9  6A 00                     PUSH 0x0
006D46EB  57                        PUSH EDI
006D46EC  50                        PUSH EAX
006D46ED  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
006D46F3  3B C7                     CMP EAX,EDI
006D46F5  5F                        POP EDI
006D46F6  75 0A                     JNZ 0x006d4702
006D46F8  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006D46FB  51                        PUSH ECX
006D46FC  FF 15 50 BB 85 00         CALL dword ptr [0x0085bb50]
LAB_006d4702:
006D4702  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006D4705  83 F8 FF                  CMP EAX,-0x1
006D4708  74 07                     JZ 0x006d4711
006D470A  50                        PUSH EAX
006D470B  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_006d4711:
006D4711  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006D4714  52                        PUSH EDX
006D4715  E8 76 17 FD FF            CALL 0x006a5e90
006D471A  F7 46 08 00 00 40 00      TEST dword ptr [ESI + 0x8],0x400000
006D4721  74 06                     JZ 0x006d4729
006D4723  56                        PUSH ESI
006D4724  E8 67 17 FD FF            CALL 0x006a5e90
LAB_006d4729:
006D4729  53                        PUSH EBX
006D472A  FF 15 54 BB 85 00         CALL dword ptr [0x0085bb54]
006D4730  5B                        POP EBX
LAB_006d4731:
006D4731  5E                        POP ESI
006D4732  5D                        POP EBP
006D4733  C2 08 00                  RET 0x8
