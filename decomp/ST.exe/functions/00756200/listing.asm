FUN_00756200:
00756200  55                        PUSH EBP
00756201  8B EC                     MOV EBP,ESP
00756203  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00756206  53                        PUSH EBX
00756207  56                        PUSH ESI
00756208  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075620B  33 DB                     XOR EBX,EBX
0075620D  83 F8 3D                  CMP EAX,0x3d
00756210  89 1E                     MOV dword ptr [ESI],EBX
00756212  74 14                     JZ 0x00756228
00756214  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00756219  6A 27                     PUSH 0x27
0075621B  68 38 2D 7F 00            PUSH 0x7f2d38
00756220  50                        PUSH EAX
00756221  6A 0A                     PUSH 0xa
00756223  E8 18 FC F4 FF            CALL 0x006a5e40
LAB_00756228:
00756228  81 7D 10 BE 01 00 00      CMP dword ptr [EBP + 0x10],0x1be
0075622F  74 15                     JZ 0x00756246
00756231  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00756237  6A 2A                     PUSH 0x2a
00756239  68 38 2D 7F 00            PUSH 0x7f2d38
0075623E  51                        PUSH ECX
0075623F  6A 13                     PUSH 0x13
00756241  E8 FA FB F4 FF            CALL 0x006a5e40
LAB_00756246:
00756246  57                        PUSH EDI
00756247  B9 6F 00 00 00            MOV ECX,0x6f
0075624C  33 C0                     XOR EAX,EAX
0075624E  8B FE                     MOV EDI,ESI
00756250  F3 AB                     STOSD.REP ES:EDI
00756252  66 AB                     STOSW ES:EDI
00756254  56                        PUSH ESI
00756255  C7 46 08 01 00 00 00      MOV dword ptr [ESI + 0x8],0x1
0075625C  E8 6F 2F 00 00            CALL 0x007591d0
00756261  33 D2                     XOR EDX,EDX
00756263  89 5E 04                  MOV dword ptr [ESI + 0x4],EBX
00756266  89 5E 10                  MOV dword ptr [ESI + 0x10],EBX
00756269  89 96 9C 00 00 00         MOV dword ptr [ESI + 0x9c],EDX
0075626F  89 96 A0 00 00 00         MOV dword ptr [ESI + 0xa0],EDX
00756275  8D 86 BC 00 00 00         LEA EAX,[ESI + 0xbc]
0075627B  89 96 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EDX
00756281  B9 04 00 00 00            MOV ECX,0x4
00756286  89 96 A8 00 00 00         MOV dword ptr [ESI + 0xa8],EDX
0075628C  5F                        POP EDI
LAB_0075628d:
0075628D  89 58 F0                  MOV dword ptr [EAX + -0x10],EBX
00756290  89 18                     MOV dword ptr [EAX],EBX
00756292  83 C0 04                  ADD EAX,0x4
00756295  49                        DEC ECX
00756296  75 F5                     JNZ 0x0075628d
00756298  56                        PUSH ESI
00756299  E8 C2 1B 00 00            CALL 0x00757e60
0075629E  56                        PUSH ESI
0075629F  E8 1C 14 00 00            CALL 0x007576c0
007562A4  C7 46 0C C8 00 00 00      MOV dword ptr [ESI + 0xc],0xc8
007562AB  5E                        POP ESI
007562AC  5B                        POP EBX
007562AD  5D                        POP EBP
007562AE  C2 0C 00                  RET 0xc
