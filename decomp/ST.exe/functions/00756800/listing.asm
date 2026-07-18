FUN_00756800:
00756800  55                        PUSH EBP
00756801  8B EC                     MOV EBP,ESP
00756803  53                        PUSH EBX
00756804  56                        PUSH ESI
00756805  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00756808  57                        PUSH EDI
00756809  BF CC 00 00 00            MOV EDI,0xcc
0075680E  39 7E 0C                  CMP dword ptr [ESI + 0xc],EDI
00756811  74 16                     JZ 0x00756829
00756813  8B 86 92 01 00 00         MOV EAX,dword ptr [ESI + 0x192]
00756819  56                        PUSH ESI
0075681A  FF 10                     CALL dword ptr [EAX]
0075681C  C7 86 84 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x84],0x0
00756826  89 7E 0C                  MOV dword ptr [ESI + 0xc],EDI
LAB_00756829:
00756829  8B 8E 92 01 00 00         MOV ECX,dword ptr [ESI + 0x192]
0075682F  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00756832  85 C0                     TEST EAX,EAX
00756834  74 6A                     JZ 0x007568a0
00756836  8D BE 84 00 00 00         LEA EDI,[ESI + 0x84]
LAB_0075683c:
0075683C  8B 07                     MOV EAX,dword ptr [EDI]
0075683E  8B 4E 6C                  MOV ECX,dword ptr [ESI + 0x6c]
00756841  3B C1                     CMP EAX,ECX
00756843  73 35                     JNC 0x0075687a
LAB_00756845:
00756845  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00756848  85 C9                     TEST ECX,ECX
0075684A  74 12                     JZ 0x0075685e
0075684C  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0075684F  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00756852  8B 46 6C                  MOV EAX,dword ptr [ESI + 0x6c]
00756855  56                        PUSH ESI
00756856  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
00756859  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0075685C  FF 11                     CALL dword ptr [ECX]
LAB_0075685e:
0075685E  8B 96 96 01 00 00         MOV EDX,dword ptr [ESI + 0x196]
00756864  8B 1F                     MOV EBX,dword ptr [EDI]
00756866  6A 00                     PUSH 0x0
00756868  57                        PUSH EDI
00756869  6A 00                     PUSH 0x0
0075686B  56                        PUSH ESI
0075686C  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075686F  8B 07                     MOV EAX,dword ptr [EDI]
00756871  3B C3                     CMP EAX,EBX
00756873  74 49                     JZ 0x007568be
00756875  3B 46 6C                  CMP EAX,dword ptr [ESI + 0x6c]
00756878  72 CB                     JC 0x00756845
LAB_0075687a:
0075687A  8B 86 92 01 00 00         MOV EAX,dword ptr [ESI + 0x192]
00756880  56                        PUSH ESI
00756881  FF 50 04                  CALL dword ptr [EAX + 0x4]
00756884  8B 8E 92 01 00 00         MOV ECX,dword ptr [ESI + 0x192]
0075688A  56                        PUSH ESI
0075688B  FF 11                     CALL dword ptr [ECX]
0075688D  8B 96 92 01 00 00         MOV EDX,dword ptr [ESI + 0x192]
00756893  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
00756899  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0075689C  85 C0                     TEST EAX,EAX
0075689E  75 9C                     JNZ 0x0075683c
LAB_007568a0:
007568A0  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
007568A3  33 C0                     XOR EAX,EAX
007568A5  85 D2                     TEST EDX,EDX
007568A7  0F 95 C0                  SETNZ AL
007568AA  05 CD 00 00 00            ADD EAX,0xcd
007568AF  5F                        POP EDI
007568B0  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
007568B3  5E                        POP ESI
007568B4  B8 01 00 00 00            MOV EAX,0x1
007568B9  5B                        POP EBX
007568BA  5D                        POP EBP
007568BB  C2 04 00                  RET 0x4
LAB_007568be:
007568BE  5F                        POP EDI
007568BF  5E                        POP ESI
007568C0  33 C0                     XOR EAX,EAX
007568C2  5B                        POP EBX
007568C3  5D                        POP EBP
007568C4  C2 04 00                  RET 0x4
