FUN_00715630:
00715630  55                        PUSH EBP
00715631  8B EC                     MOV EBP,ESP
00715633  81 EC A4 00 00 00         SUB ESP,0xa4
00715639  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071563C  56                        PUSH ESI
0071563D  85 C0                     TEST EAX,EAX
0071563F  57                        PUSH EDI
00715640  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00715647  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0071564E  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00715655  75 08                     JNZ 0x0071565f
00715657  33 C0                     XOR EAX,EAX
00715659  5F                        POP EDI
0071565A  5E                        POP ESI
0071565B  8B E5                     MOV ESP,EBP
0071565D  5D                        POP EBP
0071565E  C3                        RET
LAB_0071565f:
0071565F  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00715664  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00715667  8D 4D A0                  LEA ECX,[EBP + -0x60]
0071566A  6A 00                     PUSH 0x0
0071566C  52                        PUSH EDX
0071566D  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00715670  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00715676  E8 75 81 01 00            CALL 0x0072d7f0
0071567B  8B F0                     MOV ESI,EAX
0071567D  83 C4 08                  ADD ESP,0x8
00715680  85 F6                     TEST ESI,ESI
00715682  0F 85 40 01 00 00         JNZ 0x007157c8
00715688  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071568D  8D 95 60 FF FF FF         LEA EDX,[EBP + 0xffffff60]
00715693  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
00715699  56                        PUSH ESI
0071569A  52                        PUSH EDX
0071569B  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
007156A1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007156A7  E8 44 81 01 00            CALL 0x0072d7f0
007156AC  83 C4 08                  ADD ESP,0x8
007156AF  85 C0                     TEST EAX,EAX
007156B1  75 32                     JNZ 0x007156e5
007156B3  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
007156B6  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
007156B9  50                        PUSH EAX
007156BA  8D 55 EC                  LEA EDX,[EBP + -0x14]
007156BD  51                        PUSH ECX
007156BE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007156C1  8D 45 FC                  LEA EAX,[EBP + -0x4]
007156C4  52                        PUSH EDX
007156C5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007156C8  50                        PUSH EAX
007156C9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007156CC  51                        PUSH ECX
007156CD  52                        PUSH EDX
007156CE  50                        PUSH EAX
007156CF  E8 2C 1D FA FF            CALL 0x006b7400
007156D4  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
007156DA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007156DD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007156E3  EB 1F                     JMP 0x00715704
LAB_007156e5:
007156E5  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
007156EB  68 97 00 00 00            PUSH 0x97
007156F0  68 3C 04 7F 00            PUSH 0x7f043c
007156F5  6A 00                     PUSH 0x0
007156F7  6A B3                     PUSH -0x4d
007156F9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007156FF  E8 3C 07 F9 FF            CALL 0x006a5e40
LAB_00715704:
00715704  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00715707  85 C0                     TEST EAX,EAX
00715709  74 10                     JZ 0x0071571b
0071570B  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0071570E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00715713  33 C0                     XOR EAX,EAX
00715715  5F                        POP EDI
00715716  5E                        POP ESI
00715717  8B E5                     MOV ESP,EBP
00715719  5D                        POP EBP
0071571A  C3                        RET
LAB_0071571b:
0071571B  8D 4D E8                  LEA ECX,[EBP + -0x18]
0071571E  8D 55 F4                  LEA EDX,[EBP + -0xc]
00715721  51                        PUSH ECX
00715722  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00715725  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00715728  52                        PUSH EDX
00715729  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071572C  50                        PUSH EAX
0071572D  51                        PUSH ECX
0071572E  52                        PUSH EDX
0071572F  E8 AC FD FF FF            CALL 0x007154e0
00715734  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00715737  83 C4 14                  ADD ESP,0x14
0071573A  85 F6                     TEST ESI,ESI
0071573C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0071573F  74 06                     JZ 0x00715747
00715741  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_00715747:
00715747  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0071574A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0071574D  85 C9                     TEST ECX,ECX
0071574F  74 02                     JZ 0x00715753
00715751  89 11                     MOV dword ptr [ECX],EDX
LAB_00715753:
00715753  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00715756  85 C9                     TEST ECX,ECX
00715758  74 0B                     JZ 0x00715765
0071575A  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0071575D  81 E7 FF 00 00 00         AND EDI,0xff
00715763  89 39                     MOV dword ptr [ECX],EDI
LAB_00715765:
00715765  85 D2                     TEST EDX,EDX
00715767  74 3C                     JZ 0x007157a5
00715769  85 F6                     TEST ESI,ESI
0071576B  74 2B                     JZ 0x00715798
0071576D  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00715770  85 C9                     TEST ECX,ECX
00715772  74 04                     JZ 0x00715778
00715774  89 06                     MOV dword ptr [ESI],EAX
00715776  EB 2D                     JMP 0x007157a5
LAB_00715778:
00715778  52                        PUSH EDX
00715779  E8 F2 54 F9 FF            CALL 0x006aac70
0071577E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00715781  89 06                     MOV dword ptr [ESI],EAX
00715783  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00715786  8B F8                     MOV EDI,EAX
00715788  8B C1                     MOV EAX,ECX
0071578A  C1 E9 02                  SHR ECX,0x2
0071578D  F3 A5                     MOVSD.REP ES:EDI,ESI
0071578F  8B C8                     MOV ECX,EAX
00715791  83 E1 03                  AND ECX,0x3
00715794  F3 A4                     MOVSB.REP ES:EDI,ESI
00715796  EB 0D                     JMP 0x007157a5
LAB_00715798:
00715798  85 C0                     TEST EAX,EAX
0071579A  74 09                     JZ 0x007157a5
0071579C  8D 4D F8                  LEA ECX,[EBP + -0x8]
0071579F  51                        PUSH ECX
007157A0  E8 BB 58 F9 FF            CALL 0x006ab060
LAB_007157a5:
007157A5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007157A8  85 C0                     TEST EAX,EAX
007157AA  74 09                     JZ 0x007157b5
007157AC  8D 55 FC                  LEA EDX,[EBP + -0x4]
007157AF  52                        PUSH EDX
007157B0  E8 AB 58 F9 FF            CALL 0x006ab060
LAB_007157b5:
007157B5  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
007157B8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007157BD  B8 01 00 00 00            MOV EAX,0x1
007157C2  5F                        POP EDI
007157C3  5E                        POP ESI
007157C4  8B E5                     MOV ESP,EBP
007157C6  5D                        POP EBP
007157C7  C3                        RET
LAB_007157c8:
007157C8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007157CB  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
007157CE  85 C0                     TEST EAX,EAX
007157D0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007157D6  74 09                     JZ 0x007157e1
007157D8  8D 55 FC                  LEA EDX,[EBP + -0x4]
007157DB  52                        PUSH EDX
007157DC  E8 7F 58 F9 FF            CALL 0x006ab060
LAB_007157e1:
007157E1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007157E4  85 C0                     TEST EAX,EAX
007157E6  74 10                     JZ 0x007157f8
007157E8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007157EB  85 C0                     TEST EAX,EAX
007157ED  74 09                     JZ 0x007157f8
007157EF  8D 45 F8                  LEA EAX,[EBP + -0x8]
007157F2  50                        PUSH EAX
007157F3  E8 68 58 F9 FF            CALL 0x006ab060
LAB_007157f8:
007157F8  83 FE B3                  CMP ESI,-0x4d
007157FB  75 08                     JNZ 0x00715805
007157FD  8B C6                     MOV EAX,ESI
007157FF  5F                        POP EDI
00715800  5E                        POP ESI
00715801  8B E5                     MOV ESP,EBP
00715803  5D                        POP EBP
00715804  C3                        RET
LAB_00715805:
00715805  68 BB 00 00 00            PUSH 0xbb
0071580A  68 3C 04 7F 00            PUSH 0x7f043c
0071580F  6A 00                     PUSH 0x0
00715811  56                        PUSH ESI
00715812  E8 29 06 F9 FF            CALL 0x006a5e40
00715817  5F                        POP EDI
00715818  83 C8 FF                  OR EAX,0xffffffff
0071581B  5E                        POP ESI
0071581C  8B E5                     MOV ESP,EBP
0071581E  5D                        POP EBP
0071581F  C3                        RET
