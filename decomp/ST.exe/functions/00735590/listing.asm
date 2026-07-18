FUN_00735590:
00735590  55                        PUSH EBP
00735591  8B EC                     MOV EBP,ESP
00735593  83 EC 18                  SUB ESP,0x18
00735596  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735599  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
007355A0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007355A3  C7 41 08 00 00 00 00      MOV dword ptr [ECX + 0x8],0x0
007355AA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007355AD  C7 42 0C 00 00 00 00      MOV dword ptr [EDX + 0xc],0x0
007355B4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007355B7  83 E0 10                  AND EAX,0x10
007355BA  85 C0                     TEST EAX,EAX
007355BC  74 16                     JZ 0x007355d4
007355BE  C7 45 FC 8F 00 00 C0      MOV dword ptr [EBP + -0x4],0xc000008f
007355C5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007355C8  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
007355CB  83 CA 01                  OR EDX,0x1
007355CE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007355D1  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
LAB_007355d4:
007355D4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007355D7  83 E1 02                  AND ECX,0x2
007355DA  85 C9                     TEST ECX,ECX
007355DC  74 15                     JZ 0x007355f3
007355DE  C7 45 FC 93 00 00 C0      MOV dword ptr [EBP + -0x4],0xc0000093
007355E5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007355E8  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
007355EB  0C 02                     OR AL,0x2
007355ED  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007355F0  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
LAB_007355f3:
007355F3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007355F6  83 E2 01                  AND EDX,0x1
007355F9  85 D2                     TEST EDX,EDX
007355FB  74 16                     JZ 0x00735613
007355FD  C7 45 FC 91 00 00 C0      MOV dword ptr [EBP + -0x4],0xc0000091
00735604  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735607  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0073560A  83 C9 04                  OR ECX,0x4
0073560D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735610  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
LAB_00735613:
00735613  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00735616  83 E0 04                  AND EAX,0x4
00735619  85 C0                     TEST EAX,EAX
0073561B  74 16                     JZ 0x00735633
0073561D  C7 45 FC 8E 00 00 C0      MOV dword ptr [EBP + -0x4],0xc000008e
00735624  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735627  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0073562A  83 CA 08                  OR EDX,0x8
0073562D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735630  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
LAB_00735633:
00735633  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00735636  83 E1 08                  AND ECX,0x8
00735639  85 C9                     TEST ECX,ECX
0073563B  74 15                     JZ 0x00735652
0073563D  C7 45 FC 90 00 00 C0      MOV dword ptr [EBP + -0x4],0xc0000090
00735644  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735647  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0073564A  0C 10                     OR AL,0x10
0073564C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073564F  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
LAB_00735652:
00735652  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00735655  8B 02                     MOV EAX,dword ptr [EDX]
00735657  83 E0 01                  AND EAX,0x1
0073565A  F7 D8                     NEG EAX
0073565C  1B C0                     SBB EAX,EAX
0073565E  40                        INC EAX
0073565F  83 E0 01                  AND EAX,0x1
00735662  C1 E0 04                  SHL EAX,0x4
00735665  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735668  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0073566B  83 E2 EF                  AND EDX,0xffffffef
0073566E  0B D0                     OR EDX,EAX
00735670  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735673  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
00735676  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735679  8B 11                     MOV EDX,dword ptr [ECX]
0073567B  83 E2 04                  AND EDX,0x4
0073567E  F7 DA                     NEG EDX
00735680  1B D2                     SBB EDX,EDX
00735682  42                        INC EDX
00735683  83 E2 01                  AND EDX,0x1
00735686  C1 E2 03                  SHL EDX,0x3
00735689  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073568C  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0073568F  83 E1 F7                  AND ECX,0xfffffff7
00735692  0B CA                     OR ECX,EDX
00735694  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735697  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
0073569A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073569D  8B 08                     MOV ECX,dword ptr [EAX]
0073569F  83 E1 08                  AND ECX,0x8
007356A2  F7 D9                     NEG ECX
007356A4  1B C9                     SBB ECX,ECX
007356A6  41                        INC ECX
007356A7  83 E1 01                  AND ECX,0x1
007356AA  C1 E1 02                  SHL ECX,0x2
007356AD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007356B0  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
007356B3  24 FB                     AND AL,0xfb
007356B5  0B C1                     OR EAX,ECX
007356B7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007356BA  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
007356BD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007356C0  8B 02                     MOV EAX,dword ptr [EDX]
007356C2  83 E0 10                  AND EAX,0x10
007356C5  F7 D8                     NEG EAX
007356C7  1B C0                     SBB EAX,EAX
007356C9  40                        INC EAX
007356CA  83 E0 01                  AND EAX,0x1
007356CD  D1 E0                     SHL EAX,0x1
007356CF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007356D2  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
007356D5  83 E2 FD                  AND EDX,0xfffffffd
007356D8  0B D0                     OR EDX,EAX
007356DA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007356DD  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
007356E0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007356E3  8B 11                     MOV EDX,dword ptr [ECX]
007356E5  83 E2 20                  AND EDX,0x20
007356E8  F7 DA                     NEG EDX
007356EA  1B D2                     SBB EDX,EDX
007356EC  42                        INC EDX
007356ED  83 E2 01                  AND EDX,0x1
007356F0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007356F3  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
007356F6  83 E1 FE                  AND ECX,0xfffffffe
007356F9  0B CA                     OR ECX,EDX
007356FB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007356FE  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00735701  E8 2A 0B 00 00            CALL 0x00736230
00735706  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00735709  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073570C  83 E0 01                  AND EAX,0x1
0073570F  85 C0                     TEST EAX,EAX
00735711  74 0F                     JZ 0x00735722
00735713  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735716  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00735719  83 CA 10                  OR EDX,0x10
0073571C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073571F  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
LAB_00735722:
00735722  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00735725  83 E1 04                  AND ECX,0x4
00735728  85 C9                     TEST ECX,ECX
0073572A  74 0E                     JZ 0x0073573a
0073572C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073572F  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00735732  0C 08                     OR AL,0x8
00735734  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735737  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
LAB_0073573a:
0073573A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073573D  83 E2 08                  AND EDX,0x8
00735740  85 D2                     TEST EDX,EDX
00735742  74 0F                     JZ 0x00735753
00735744  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735747  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0073574A  83 C9 04                  OR ECX,0x4
0073574D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735750  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
LAB_00735753:
00735753  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00735756  83 E0 10                  AND EAX,0x10
00735759  85 C0                     TEST EAX,EAX
0073575B  74 0F                     JZ 0x0073576c
0073575D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735760  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00735763  83 CA 02                  OR EDX,0x2
00735766  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735769  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
LAB_0073576c:
0073576C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073576F  83 E1 20                  AND ECX,0x20
00735772  85 C9                     TEST ECX,ECX
00735774  74 0E                     JZ 0x00735784
00735776  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735779  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073577C  0C 01                     OR AL,0x1
0073577E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735781  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
LAB_00735784:
00735784  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00735787  8B 02                     MOV EAX,dword ptr [EDX]
00735789  25 00 0C 00 00            AND EAX,0xc00
0073578E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00735791  81 7D F4 00 08 00 00      CMP dword ptr [EBP + -0xc],0x800
00735798  77 1A                     JA 0x007357b4
0073579A  81 7D F4 00 08 00 00      CMP dword ptr [EBP + -0xc],0x800
007357A1  74 2B                     JZ 0x007357ce
007357A3  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
007357A7  74 49                     JZ 0x007357f2
007357A9  81 7D F4 00 04 00 00      CMP dword ptr [EBP + -0xc],0x400
007357B0  74 2E                     JZ 0x007357e0
007357B2  EB 4B                     JMP 0x007357ff
LAB_007357b4:
007357B4  81 7D F4 00 0C 00 00      CMP dword ptr [EBP + -0xc],0xc00
007357BB  74 02                     JZ 0x007357bf
007357BD  EB 40                     JMP 0x007357ff
LAB_007357bf:
007357BF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007357C2  8B 11                     MOV EDX,dword ptr [ECX]
007357C4  83 CA 03                  OR EDX,0x3
007357C7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007357CA  89 10                     MOV dword ptr [EAX],EDX
007357CC  EB 31                     JMP 0x007357ff
LAB_007357ce:
007357CE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007357D1  8B 11                     MOV EDX,dword ptr [ECX]
007357D3  83 E2 FC                  AND EDX,0xfffffffc
007357D6  83 CA 02                  OR EDX,0x2
007357D9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007357DC  89 10                     MOV dword ptr [EAX],EDX
007357DE  EB 1F                     JMP 0x007357ff
LAB_007357e0:
007357E0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007357E3  8B 11                     MOV EDX,dword ptr [ECX]
007357E5  83 E2 FC                  AND EDX,0xfffffffc
007357E8  83 CA 01                  OR EDX,0x1
007357EB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007357EE  89 10                     MOV dword ptr [EAX],EDX
007357F0  EB 0D                     JMP 0x007357ff
LAB_007357f2:
007357F2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007357F5  8B 11                     MOV EDX,dword ptr [ECX]
007357F7  83 E2 FC                  AND EDX,0xfffffffc
007357FA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007357FD  89 10                     MOV dword ptr [EAX],EDX
LAB_007357ff:
007357FF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735802  8B 11                     MOV EDX,dword ptr [ECX]
00735804  81 E2 00 03 00 00         AND EDX,0x300
0073580A  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0073580D  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
00735811  74 35                     JZ 0x00735848
00735813  81 7D F0 00 02 00 00      CMP dword ptr [EBP + -0x10],0x200
0073581A  74 1A                     JZ 0x00735836
0073581C  81 7D F0 00 03 00 00      CMP dword ptr [EBP + -0x10],0x300
00735823  74 02                     JZ 0x00735827
00735825  EB 31                     JMP 0x00735858
LAB_00735827:
00735827  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073582A  8B 08                     MOV ECX,dword ptr [EAX]
0073582C  83 E1 E3                  AND ECX,0xffffffe3
0073582F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735832  89 0A                     MOV dword ptr [EDX],ECX
00735834  EB 22                     JMP 0x00735858
LAB_00735836:
00735836  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735839  8B 08                     MOV ECX,dword ptr [EAX]
0073583B  83 E1 E3                  AND ECX,0xffffffe3
0073583E  83 C9 04                  OR ECX,0x4
00735841  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735844  89 0A                     MOV dword ptr [EDX],ECX
00735846  EB 10                     JMP 0x00735858
LAB_00735848:
00735848  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073584B  8B 08                     MOV ECX,dword ptr [EAX]
0073584D  83 E1 E3                  AND ECX,0xffffffe3
00735850  83 C9 08                  OR ECX,0x8
00735853  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00735856  89 0A                     MOV dword ptr [EDX],ECX
LAB_00735858:
00735858  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0073585B  25 FF 0F 00 00            AND EAX,0xfff
00735860  C1 E0 05                  SHL EAX,0x5
00735863  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735866  8B 11                     MOV EDX,dword ptr [ECX]
00735868  81 E2 1F 00 FE FF         AND EDX,0xfffe001f
0073586E  0B D0                     OR EDX,EAX
00735870  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735873  89 10                     MOV dword ptr [EAX],EDX
00735875  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735878  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
0073587B  83 CA 01                  OR EDX,0x1
0073587E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735881  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
00735884  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735887  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
0073588A  83 E2 E1                  AND EDX,0xffffffe1
0073588D  83 CA 02                  OR EDX,0x2
00735890  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735893  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
00735896  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735899  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0073589C  8B 02                     MOV EAX,dword ptr [EDX]
0073589E  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
007358A1  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
007358A4  89 51 14                  MOV dword ptr [ECX + 0x14],EDX
007358A7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007358AA  8B 48 50                  MOV ECX,dword ptr [EAX + 0x50]
007358AD  83 C9 01                  OR ECX,0x1
007358B0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007358B3  89 4A 50                  MOV dword ptr [EDX + 0x50],ECX
007358B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007358B9  8B 48 50                  MOV ECX,dword ptr [EAX + 0x50]
007358BC  83 E1 E1                  AND ECX,0xffffffe1
007358BF  83 C9 02                  OR ECX,0x2
007358C2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007358C5  89 4A 50                  MOV dword ptr [EDX + 0x50],ECX
007358C8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007358CB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007358CE  8B 11                     MOV EDX,dword ptr [ECX]
007358D0  89 50 40                  MOV dword ptr [EAX + 0x40],EDX
007358D3  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
007358D6  89 48 44                  MOV dword ptr [EAX + 0x44],ECX
007358D9  E8 72 09 00 00            CALL 0x00736250
007358DE  8D 55 08                  LEA EDX,[EBP + 0x8]
007358E1  52                        PUSH EDX
007358E2  6A 01                     PUSH 0x1
007358E4  6A 00                     PUSH 0x0
007358E6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007358E9  50                        PUSH EAX
007358EA  FF 15 F8 BB 85 00         CALL dword ptr [0x0085bbf8]
007358F0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007358F3  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
007358F6  C1 EA 04                  SHR EDX,0x4
007358F9  83 E2 01                  AND EDX,0x1
007358FC  85 D2                     TEST EDX,EDX
007358FE  74 0D                     JZ 0x0073590d
00735900  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00735903  8B 08                     MOV ECX,dword ptr [EAX]
00735905  83 E1 FE                  AND ECX,0xfffffffe
00735908  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073590B  89 0A                     MOV dword ptr [EDX],ECX
LAB_0073590d:
0073590D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735910  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00735913  C1 E9 03                  SHR ECX,0x3
00735916  83 E1 01                  AND ECX,0x1
00735919  85 C9                     TEST ECX,ECX
0073591B  74 0C                     JZ 0x00735929
0073591D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00735920  8B 02                     MOV EAX,dword ptr [EDX]
00735922  24 FB                     AND AL,0xfb
00735924  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735927  89 01                     MOV dword ptr [ECX],EAX
LAB_00735929:
00735929  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073592C  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0073592F  C1 E8 02                  SHR EAX,0x2
00735932  83 E0 01                  AND EAX,0x1
00735935  85 C0                     TEST EAX,EAX
00735937  74 0D                     JZ 0x00735946
00735939  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0073593C  8B 11                     MOV EDX,dword ptr [ECX]
0073593E  83 E2 F7                  AND EDX,0xfffffff7
00735941  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00735944  89 10                     MOV dword ptr [EAX],EDX
LAB_00735946:
00735946  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735949  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0073594C  D1 EA                     SHR EDX,0x1
0073594E  83 E2 01                  AND EDX,0x1
00735951  85 D2                     TEST EDX,EDX
00735953  74 0D                     JZ 0x00735962
00735955  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00735958  8B 08                     MOV ECX,dword ptr [EAX]
0073595A  83 E1 EF                  AND ECX,0xffffffef
0073595D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00735960  89 0A                     MOV dword ptr [EDX],ECX
LAB_00735962:
00735962  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735965  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00735968  83 E1 01                  AND ECX,0x1
0073596B  85 C9                     TEST ECX,ECX
0073596D  74 0C                     JZ 0x0073597b
0073596F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00735972  8B 02                     MOV EAX,dword ptr [EDX]
00735974  24 DF                     AND AL,0xdf
00735976  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735979  89 01                     MOV dword ptr [ECX],EAX
LAB_0073597b:
0073597B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073597E  8B 02                     MOV EAX,dword ptr [EDX]
00735980  83 E0 03                  AND EAX,0x3
00735983  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00735986  83 7D EC 03               CMP dword ptr [EBP + -0x14],0x3
0073598A  77 4D                     JA 0x007359d9
0073598C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
switchD_0073598f::switchD:
0073598F  FF 24 8D 41 5A 73 00      JMP dword ptr [ECX*0x4 + 0x735a41]
switchD_0073598f::caseD_3:
00735996  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00735999  8B 02                     MOV EAX,dword ptr [EDX]
0073599B  80 E4 F3                  AND AH,0xf3
0073599E  80 CC 0C                  OR AH,0xc
007359A1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007359A4  89 01                     MOV dword ptr [ECX],EAX
007359A6  EB 31                     JMP 0x007359d9
switchD_0073598f::caseD_2:
007359A8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007359AB  8B 02                     MOV EAX,dword ptr [EDX]
007359AD  80 E4 F3                  AND AH,0xf3
007359B0  80 CC 08                  OR AH,0x8
007359B3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007359B6  89 01                     MOV dword ptr [ECX],EAX
007359B8  EB 1F                     JMP 0x007359d9
switchD_0073598f::caseD_1:
007359BA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007359BD  8B 02                     MOV EAX,dword ptr [EDX]
007359BF  80 E4 F3                  AND AH,0xf3
007359C2  80 CC 04                  OR AH,0x4
007359C5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007359C8  89 01                     MOV dword ptr [ECX],EAX
007359CA  EB 0D                     JMP 0x007359d9
switchD_0073598f::caseD_0:
007359CC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007359CF  8B 02                     MOV EAX,dword ptr [EDX]
007359D1  80 E4 F3                  AND AH,0xf3
007359D4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007359D7  89 01                     MOV dword ptr [ECX],EAX
switchD_0073598f::default:
007359D9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007359DC  8B 02                     MOV EAX,dword ptr [EDX]
007359DE  C1 E8 02                  SHR EAX,0x2
007359E1  83 E0 07                  AND EAX,0x7
007359E4  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
007359E7  83 7D E8 00               CMP dword ptr [EBP + -0x18],0x0
007359EB  74 0E                     JZ 0x007359fb
007359ED  83 7D E8 01               CMP dword ptr [EBP + -0x18],0x1
007359F1  74 1A                     JZ 0x00735a0d
007359F3  83 7D E8 02               CMP dword ptr [EBP + -0x18],0x2
007359F7  74 26                     JZ 0x00735a1f
007359F9  EB 31                     JMP 0x00735a2c
LAB_007359fb:
007359FB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007359FE  8B 11                     MOV EDX,dword ptr [ECX]
00735A00  80 E6 F3                  AND DH,0xf3
00735A03  80 CE 03                  OR DH,0x3
00735A06  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00735A09  89 10                     MOV dword ptr [EAX],EDX
00735A0B  EB 1F                     JMP 0x00735a2c
LAB_00735a0d:
00735A0D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735A10  8B 11                     MOV EDX,dword ptr [ECX]
00735A12  80 E6 F3                  AND DH,0xf3
00735A15  80 CE 02                  OR DH,0x2
00735A18  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00735A1B  89 10                     MOV dword ptr [EAX],EDX
00735A1D  EB 0D                     JMP 0x00735a2c
LAB_00735a1f:
00735A1F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735A22  8B 11                     MOV EDX,dword ptr [ECX]
00735A24  80 E6 F3                  AND DH,0xf3
00735A27  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00735A2A  89 10                     MOV dword ptr [EAX],EDX
LAB_00735a2c:
00735A2C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00735A2F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00735A32  8B 41 40                  MOV EAX,dword ptr [ECX + 0x40]
00735A35  89 02                     MOV dword ptr [EDX],EAX
00735A37  8B 49 44                  MOV ECX,dword ptr [ECX + 0x44]
00735A3A  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00735A3D  8B E5                     MOV ESP,EBP
00735A3F  5D                        POP EBP
00735A40  C3                        RET
