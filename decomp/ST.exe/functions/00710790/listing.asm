FUN_00710790:
00710790  55                        PUSH EBP
00710791  8B EC                     MOV EBP,ESP
00710793  56                        PUSH ESI
00710794  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00710797  85 F6                     TEST ESI,ESI
00710799  0F 84 0D 01 00 00         JZ 0x007108ac
0071079F  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
007107A5  85 C0                     TEST EAX,EAX
007107A7  0F 84 FF 00 00 00         JZ 0x007108ac
007107AD  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
007107B3  85 C0                     TEST EAX,EAX
007107B5  0F 84 F1 00 00 00         JZ 0x007108ac
007107BB  8B 88 9A 00 00 00         MOV ECX,dword ptr [EAX + 0x9a]
007107C1  33 D2                     XOR EDX,EDX
007107C3  89 8E 9A 00 00 00         MOV dword ptr [ESI + 0x9a],ECX
007107C9  8B 88 9A 00 00 00         MOV ECX,dword ptr [EAX + 0x9a]
007107CF  57                        PUSH EDI
007107D0  66 39 11                  CMP word ptr [ECX],DX
007107D3  7E 30                     JLE 0x00710805
007107D5  B9 04 00 00 00            MOV ECX,0x4
LAB_007107da:
007107DA  83 F9 04                  CMP ECX,0x4
007107DD  7C 0A                     JL 0x007107e9
007107DF  83 F9 44                  CMP ECX,0x44
007107E2  7D 05                     JGE 0x007107e9
007107E4  8B 04 01                  MOV EAX,dword ptr [ECX + EAX*0x1]
007107E7  EB 02                     JMP 0x007107eb
LAB_007107e9:
007107E9  33 C0                     XOR EAX,EAX
LAB_007107eb:
007107EB  89 04 31                  MOV dword ptr [ECX + ESI*0x1],EAX
007107EE  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
007107F4  42                        INC EDX
007107F5  83 C1 04                  ADD ECX,0x4
007107F8  8B B8 9A 00 00 00         MOV EDI,dword ptr [EAX + 0x9a]
007107FE  0F BF 3F                  MOVSX EDI,word ptr [EDI]
00710801  3B D7                     CMP EDX,EDI
00710803  7C D5                     JL 0x007107da
LAB_00710805:
00710805  8B BE A8 00 00 00         MOV EDI,dword ptr [ESI + 0xa8]
0071080B  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
00710811  85 C0                     TEST EAX,EAX
00710813  74 09                     JZ 0x0071081e
00710815  57                        PUSH EDI
00710816  E8 75 FF FF FF            CALL 0x00710790
0071081B  83 C4 04                  ADD ESP,0x4
LAB_0071081e:
0071081E  8B 97 8A 00 00 00         MOV EDX,dword ptr [EDI + 0x8a]
00710824  8B BE A8 00 00 00         MOV EDI,dword ptr [ESI + 0xa8]
0071082A  89 96 8A 00 00 00         MOV dword ptr [ESI + 0x8a],EDX
00710830  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
00710836  85 C0                     TEST EAX,EAX
00710838  74 09                     JZ 0x00710843
0071083A  57                        PUSH EDI
0071083B  E8 50 FF FF FF            CALL 0x00710790
00710840  83 C4 04                  ADD ESP,0x4
LAB_00710843:
00710843  8B 87 86 00 00 00         MOV EAX,dword ptr [EDI + 0x86]
00710849  8B BE A8 00 00 00         MOV EDI,dword ptr [ESI + 0xa8]
0071084F  89 86 86 00 00 00         MOV dword ptr [ESI + 0x86],EAX
00710855  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
0071085B  85 C0                     TEST EAX,EAX
0071085D  74 09                     JZ 0x00710868
0071085F  57                        PUSH EDI
00710860  E8 2B FF FF FF            CALL 0x00710790
00710865  83 C4 04                  ADD ESP,0x4
LAB_00710868:
00710868  8B 8F 92 00 00 00         MOV ECX,dword ptr [EDI + 0x92]
0071086E  8B BE A8 00 00 00         MOV EDI,dword ptr [ESI + 0xa8]
00710874  89 8E 92 00 00 00         MOV dword ptr [ESI + 0x92],ECX
0071087A  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
00710880  85 C0                     TEST EAX,EAX
00710882  74 09                     JZ 0x0071088d
00710884  57                        PUSH EDI
00710885  E8 06 FF FF FF            CALL 0x00710790
0071088A  83 C4 04                  ADD ESP,0x4
LAB_0071088d:
0071088D  8B 97 8E 00 00 00         MOV EDX,dword ptr [EDI + 0x8e]
00710893  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
00710899  89 96 8E 00 00 00         MOV dword ptr [ESI + 0x8e],EDX
0071089F  5F                        POP EDI
007108A0  8B 88 AC 00 00 00         MOV ECX,dword ptr [EAX + 0xac]
007108A6  89 8E AC 00 00 00         MOV dword ptr [ESI + 0xac],ECX
LAB_007108ac:
007108AC  5E                        POP ESI
007108AD  5D                        POP EBP
007108AE  C3                        RET
