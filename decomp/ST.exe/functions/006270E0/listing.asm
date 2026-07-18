FUN_006270e0:
006270E0  55                        PUSH EBP
006270E1  8B EC                     MOV EBP,ESP
006270E3  8B C1                     MOV EAX,ECX
006270E5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006270E8  85 C9                     TEST ECX,ECX
006270EA  74 5A                     JZ 0x00627146
006270EC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006270EF  83 FA 15                  CMP EDX,0x15
006270F2  74 37                     JZ 0x0062712b
006270F4  83 FA 2A                  CMP EDX,0x2a
006270F7  75 4D                     JNZ 0x00627146
006270F9  80 B8 AD 02 00 00 02      CMP byte ptr [EAX + 0x2ad],0x2
00627100  75 44                     JNZ 0x00627146
00627102  8B 49 17                  MOV ECX,dword ptr [ECX + 0x17]
00627105  8A 09                     MOV CL,byte ptr [ECX]
00627107  80 F9 FF                  CMP CL,0xff
0062710A  75 0E                     JNZ 0x0062711a
0062710C  C7 80 42 03 00 00 00 00 00 00  MOV dword ptr [EAX + 0x342],0x0
00627116  5D                        POP EBP
00627117  C2 08 00                  RET 0x8
LAB_0062711a:
0062711A  BA 01 00 00 00            MOV EDX,0x1
0062711F  D3 E2                     SHL EDX,CL
00627121  31 90 42 03 00 00         XOR dword ptr [EAX + 0x342],EDX
00627127  5D                        POP EBP
00627128  C2 08 00                  RET 0x8
LAB_0062712b:
0062712B  8A 09                     MOV CL,byte ptr [ECX]
0062712D  8D 90 5E 03 00 00         LEA EDX,[EAX + 0x35e]
00627133  88 0A                     MOV byte ptr [EDX],CL
00627135  C6 80 59 03 00 00 01      MOV byte ptr [EAX + 0x359],0x1
0062713C  C7 80 5A 03 00 00 15 00 00 00  MOV dword ptr [EAX + 0x35a],0x15
LAB_00627146:
00627146  5D                        POP EBP
00627147  C2 08 00                  RET 0x8
