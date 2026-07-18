FUN_00731640:
00731640  55                        PUSH EBP
00731641  8B EC                     MOV EBP,ESP
00731643  83 EC 08                  SUB ESP,0x8
00731646  83 7D 0C E0               CMP dword ptr [EBP + 0xc],-0x20
0073164A  76 04                     JBE 0x00731650
0073164C  33 C0                     XOR EAX,EAX
0073164E  EB 78                     JMP 0x007316c8
LAB_00731650:
00731650  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00731653  50                        PUSH EAX
00731654  E8 87 04 00 00            CALL 0x00731ae0
00731659  83 C4 04                  ADD ESP,0x4
0073165C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073165F  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00731663  74 35                     JZ 0x0073169a
00731665  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073166C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073166F  3B 0D C8 14 7F 00         CMP ECX,dword ptr [0x007f14c8]
00731675  77 1E                     JA 0x00731695
00731677  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073167A  52                        PUSH EDX
0073167B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073167E  50                        PUSH EAX
0073167F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00731682  51                        PUSH ECX
00731683  E8 28 13 00 00            CALL 0x007329b0
00731688  83 C4 0C                  ADD ESP,0xc
0073168B  85 C0                     TEST EAX,EAX
0073168D  74 06                     JZ 0x00731695
0073168F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00731692  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00731695:
00731695  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00731698  EB 2E                     JMP 0x007316c8
LAB_0073169a:
0073169A  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0073169E  75 07                     JNZ 0x007316a7
007316A0  C7 45 0C 01 00 00 00      MOV dword ptr [EBP + 0xc],0x1
LAB_007316a7:
007316A7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007316AA  83 C0 0F                  ADD EAX,0xf
007316AD  24 F0                     AND AL,0xf0
007316AF  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
007316B2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007316B5  51                        PUSH ECX
007316B6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007316B9  52                        PUSH EDX
007316BA  6A 10                     PUSH 0x10
007316BC  A1 C4 A5 85 00            MOV EAX,[0x0085a5c4]
007316C1  50                        PUSH EAX
007316C2  FF 15 D0 BB 85 00         CALL dword ptr [0x0085bbd0]
LAB_007316c8:
007316C8  8B E5                     MOV ESP,EBP
007316CA  5D                        POP EBP
007316CB  C3                        RET
