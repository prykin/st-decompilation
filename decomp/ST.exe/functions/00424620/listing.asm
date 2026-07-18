FUN_00424620:
00424620  55                        PUSH EBP
00424621  8B EC                     MOV EBP,ESP
00424623  51                        PUSH ECX
00424624  53                        PUSH EBX
00424625  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00424628  56                        PUSH ESI
00424629  8B F1                     MOV ESI,ECX
0042462B  F6 C3 01                  TEST BL,0x1
0042462E  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
00424631  57                        PUSH EDI
00424632  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00424635  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00424638  74 0C                     JZ 0x00424646
0042463A  8B 46 35                  MOV EAX,dword ptr [ESI + 0x35]
0042463D  A8 01                     TEST AL,0x1
0042463F  74 05                     JZ 0x00424646
00424641  24 FE                     AND AL,0xfe
00424643  89 46 35                  MOV dword ptr [ESI + 0x35],EAX
LAB_00424646:
00424646  F6 C3 02                  TEST BL,0x2
00424649  74 0C                     JZ 0x00424657
0042464B  8B 46 35                  MOV EAX,dword ptr [ESI + 0x35]
0042464E  A8 02                     TEST AL,0x2
00424650  74 05                     JZ 0x00424657
00424652  24 FD                     AND AL,0xfd
00424654  89 46 35                  MOV dword ptr [ESI + 0x35],EAX
LAB_00424657:
00424657  F6 C3 04                  TEST BL,0x4
0042465A  74 0C                     JZ 0x00424668
0042465C  8B 46 35                  MOV EAX,dword ptr [ESI + 0x35]
0042465F  A8 04                     TEST AL,0x4
00424661  74 05                     JZ 0x00424668
00424663  24 FB                     AND AL,0xfb
00424665  89 46 35                  MOV dword ptr [ESI + 0x35],EAX
LAB_00424668:
00424668  F6 C3 08                  TEST BL,0x8
0042466B  74 0C                     JZ 0x00424679
0042466D  8B 46 35                  MOV EAX,dword ptr [ESI + 0x35]
00424670  A8 08                     TEST AL,0x8
00424672  74 05                     JZ 0x00424679
00424674  24 F7                     AND AL,0xf7
00424676  89 46 35                  MOV dword ptr [ESI + 0x35],EAX
LAB_00424679:
00424679  F6 C3 10                  TEST BL,0x10
0042467C  74 0C                     JZ 0x0042468a
0042467E  8B 46 35                  MOV EAX,dword ptr [ESI + 0x35]
00424681  A8 10                     TEST AL,0x10
00424683  74 05                     JZ 0x0042468a
00424685  24 EF                     AND AL,0xef
00424687  89 46 35                  MOV dword ptr [ESI + 0x35],EAX
LAB_0042468a:
0042468A  33 FF                     XOR EDI,EDI
0042468C  85 C9                     TEST ECX,ECX
0042468E  76 44                     JBE 0x004246d4
00424690  33 D2                     XOR EDX,EDX
LAB_00424692:
00424692  8D 4D 08                  LEA ECX,[EBP + 0x8]
00424695  51                        PUSH ECX
00424696  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
00424699  E8 D2 85 28 00            CALL 0x006acc70
0042469E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004246A1  66 3D FF FF               CMP AX,0xffff
004246A5  74 1D                     JZ 0x004246c4
004246A7  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004246AA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004246B0  6A 01                     PUSH 0x1
004246B2  50                        PUSH EAX
004246B3  52                        PUSH EDX
004246B4  E8 01 E2 FD FF            CALL 0x004028ba
004246B9  8B 10                     MOV EDX,dword ptr [EAX]
004246BB  53                        PUSH EBX
004246BC  8B C8                     MOV ECX,EAX
004246BE  FF 92 04 01 00 00         CALL dword ptr [EDX + 0x104]
LAB_004246c4:
004246C4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004246C7  47                        INC EDI
004246C8  8B D7                     MOV EDX,EDI
004246CA  81 E2 FF FF 00 00         AND EDX,0xffff
004246D0  3B D0                     CMP EDX,EAX
004246D2  72 BE                     JC 0x00424692
LAB_004246d4:
004246D4  5F                        POP EDI
004246D5  5E                        POP ESI
004246D6  5B                        POP EBX
004246D7  8B E5                     MOV ESP,EBP
004246D9  5D                        POP EBP
004246DA  C2 04 00                  RET 0x4
