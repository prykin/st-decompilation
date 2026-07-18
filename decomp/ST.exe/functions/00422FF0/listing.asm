FUN_00422ff0:
00422FF0  55                        PUSH EBP
00422FF1  8B EC                     MOV EBP,ESP
00422FF3  56                        PUSH ESI
00422FF4  8B F1                     MOV ESI,ECX
00422FF6  57                        PUSH EDI
00422FF7  8B 06                     MOV EAX,dword ptr [ESI]
00422FF9  FF 50 04                  CALL dword ptr [EAX + 0x4]
00422FFC  8B F8                     MOV EDI,EAX
00422FFE  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00423001  83 F8 14                  CMP EAX,0x14
00423004  75 19                     JNZ 0x0042301f
00423006  8B CF                     MOV ECX,EDI
00423008  E8 CF FE FD FF            CALL 0x00402edc
0042300D  83 F8 14                  CMP EAX,0x14
00423010  75 0D                     JNZ 0x0042301f
00423012  83 BF C0 05 00 00 03      CMP dword ptr [EDI + 0x5c0],0x3
00423019  0F 84 B4 00 00 00         JZ 0x004230d3
LAB_0042301f:
0042301F  53                        PUSH EBX
00423020  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
00423023  F6 C3 01                  TEST BL,0x1
00423026  74 20                     JZ 0x00423048
00423028  8B 86 D1 01 00 00         MOV EAX,dword ptr [ESI + 0x1d1]
0042302E  A8 01                     TEST AL,0x1
00423030  74 16                     JZ 0x00423048
00423032  8B 8E 01 01 00 00         MOV ECX,dword ptr [ESI + 0x101]
00423038  24 FE                     AND AL,0xfe
0042303A  51                        PUSH ECX
0042303B  8B CE                     MOV ECX,ESI
0042303D  89 86 D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EAX
00423043  E8 59 F3 FD FF            CALL 0x004023a1
LAB_00423048:
00423048  F6 C3 02                  TEST BL,0x2
0042304B  74 12                     JZ 0x0042305f
0042304D  8B 86 D1 01 00 00         MOV EAX,dword ptr [ESI + 0x1d1]
00423053  A8 02                     TEST AL,0x2
00423055  74 08                     JZ 0x0042305f
00423057  24 FD                     AND AL,0xfd
00423059  89 86 D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EAX
LAB_0042305f:
0042305F  F6 C3 04                  TEST BL,0x4
00423062  74 40                     JZ 0x004230a4
00423064  8B 86 D1 01 00 00         MOV EAX,dword ptr [ESI + 0x1d1]
0042306A  A8 04                     TEST AL,0x4
0042306C  74 08                     JZ 0x00423076
0042306E  24 FB                     AND AL,0xfb
00423070  89 86 D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EAX
LAB_00423076:
00423076  83 BE 1D 02 00 00 01      CMP dword ptr [ESI + 0x21d],0x1
0042307D  75 25                     JNZ 0x004230a4
0042307F  83 7E 20 14               CMP dword ptr [ESI + 0x20],0x14
00423083  75 07                     JNZ 0x0042308c
00423085  8B CE                     MOV ECX,ESI
00423087  E8 62 1E FE FF            CALL 0x00404eee
LAB_0042308c:
0042308C  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0042308F  3D E8 03 00 00            CMP EAX,0x3e8
00423094  74 07                     JZ 0x0042309d
00423096  3D E9 03 00 00            CMP EAX,0x3e9
0042309B  75 07                     JNZ 0x004230a4
LAB_0042309d:
0042309D  8B CE                     MOV ECX,ESI
0042309F  E8 9B 13 FE FF            CALL 0x0040443f
LAB_004230a4:
004230A4  F6 C3 08                  TEST BL,0x8
004230A7  74 12                     JZ 0x004230bb
004230A9  8B 86 D1 01 00 00         MOV EAX,dword ptr [ESI + 0x1d1]
004230AF  A8 08                     TEST AL,0x8
004230B1  74 08                     JZ 0x004230bb
004230B3  24 F7                     AND AL,0xf7
004230B5  89 86 D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EAX
LAB_004230bb:
004230BB  F6 C3 10                  TEST BL,0x10
004230BE  5B                        POP EBX
004230BF  74 12                     JZ 0x004230d3
004230C1  8B 86 D1 01 00 00         MOV EAX,dword ptr [ESI + 0x1d1]
004230C7  A8 10                     TEST AL,0x10
004230C9  74 08                     JZ 0x004230d3
004230CB  24 EF                     AND AL,0xef
004230CD  89 86 D1 01 00 00         MOV dword ptr [ESI + 0x1d1],EAX
LAB_004230d3:
004230D3  5F                        POP EDI
004230D4  5E                        POP ESI
004230D5  5D                        POP EBP
004230D6  C2 04 00                  RET 0x4
