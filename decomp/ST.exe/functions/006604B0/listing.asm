FUN_006604b0:
006604B0  55                        PUSH EBP
006604B1  8B EC                     MOV EBP,ESP
006604B3  83 EC 08                  SUB ESP,0x8
006604B6  56                        PUSH ESI
006604B7  33 C0                     XOR EAX,EAX
006604B9  57                        PUSH EDI
006604BA  8B F1                     MOV ESI,ECX
006604BC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006604BF  33 FF                     XOR EDI,EDI
006604C1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006604C4  89 BE A7 00 00 00         MOV dword ptr [ESI + 0xa7],EDI
006604CA  E8 6C 2F DA FF            CALL 0x0040343b
006604CF  85 C0                     TEST EAX,EAX
006604D1  74 3F                     JZ 0x00660512
006604D3  66 8B 46 7D               MOV AX,word ptr [ESI + 0x7d]
006604D7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006604DA  66 3D FE FF               CMP AX,0xfffe
006604DE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006604E1  74 2F                     JZ 0x00660512
006604E3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006604E9  3B CF                     CMP ECX,EDI
006604EB  74 25                     JZ 0x00660512
006604ED  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
006604F0  50                        PUSH EAX
006604F1  52                        PUSH EDX
006604F2  E8 02 58 DA FF            CALL 0x00405cf9
006604F7  3B C7                     CMP EAX,EDI
006604F9  74 17                     JZ 0x00660512
006604FB  8B 10                     MOV EDX,dword ptr [EAX]
006604FD  8D 4D F8                  LEA ECX,[EBP + -0x8]
00660500  51                        PUSH ECX
00660501  6A 06                     PUSH 0x6
00660503  8B C8                     MOV ECX,EAX
00660505  FF 52 08                  CALL dword ptr [EDX + 0x8]
00660508  8B C7                     MOV EAX,EDI
0066050A  5F                        POP EDI
0066050B  5E                        POP ESI
0066050C  8B E5                     MOV ESP,EBP
0066050E  5D                        POP EBP
0066050F  C2 04 00                  RET 0x4
LAB_00660512:
00660512  5F                        POP EDI
00660513  83 C8 FF                  OR EAX,0xffffffff
00660516  5E                        POP ESI
00660517  8B E5                     MOV ESP,EBP
00660519  5D                        POP EBP
0066051A  C2 04 00                  RET 0x4
