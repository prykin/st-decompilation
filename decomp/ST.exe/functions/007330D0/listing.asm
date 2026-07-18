FUN_007330d0:
007330D0  55                        PUSH EBP
007330D1  8B EC                     MOV EBP,ESP
007330D3  81 EC 68 01 00 00         SUB ESP,0x168
007330D9  A1 BC A5 85 00            MOV EAX,[0x0085a5bc]
007330DE  6B C0 14                  IMUL EAX,EAX,0x14
007330E1  50                        PUSH EAX
007330E2  8B 0D C0 A5 85 00         MOV ECX,dword ptr [0x0085a5c0]
007330E8  51                        PUSH ECX
007330E9  FF 15 A0 BB 85 00         CALL dword ptr [0x0085bba0]
007330EF  85 C0                     TEST EAX,EAX
007330F1  74 08                     JZ 0x007330fb
007330F3  83 C8 FF                  OR EAX,0xffffffff
007330F6  E9 EE 05 00 00            JMP 0x007336e9
LAB_007330fb:
007330FB  8B 15 C0 A5 85 00         MOV EDX,dword ptr [0x0085a5c0]
00733101  89 95 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDX
00733107  C7 85 E0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffee0],0x0
00733111  EB 0F                     JMP 0x00733122
LAB_00733113:
00733113  8B 85 E0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee0]
00733119  83 C0 01                  ADD EAX,0x1
0073311C  89 85 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EAX
LAB_00733122:
00733122  8B 8D E0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee0]
00733128  3B 0D BC A5 85 00         CMP ECX,dword ptr [0x0085a5bc]
0073312E  0F 8D B3 05 00 00         JGE 0x007336e7
00733134  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
0073313A  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
0073313D  89 85 A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],EAX
00733143  68 C4 41 00 00            PUSH 0x41c4
00733148  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
0073314E  51                        PUSH ECX
0073314F  FF 15 A0 BB 85 00         CALL dword ptr [0x0085bba0]
00733155  85 C0                     TEST EAX,EAX
00733157  74 0A                     JZ 0x00733163
00733159  B8 FE FF FF FF            MOV EAX,0xfffffffe
0073315E  E9 86 05 00 00            JMP 0x007336e9
LAB_00733163:
00733163  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
00733169  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0073316C  89 85 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EAX
00733172  8B 8D A0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea0]
00733178  81 C1 44 01 00 00         ADD ECX,0x144
0073317E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00733181  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
00733187  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0073318A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073318D  C7 85 BC FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffebc],0x0
00733197  C7 85 A8 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffea8],0x0
007331A1  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
007331A8  EB 09                     JMP 0x007331b3
LAB_007331aa:
007331AA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007331AD  83 C1 01                  ADD ECX,0x1
007331B0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_007331b3:
007331B3  83 7D F4 20               CMP dword ptr [EBP + -0xc],0x20
007331B7  0F 8D EE 04 00 00         JGE 0x007336ab
007331BD  C7 85 E4 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffee4],0x0
007331C7  C7 85 B0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeb0],0x0
007331D1  C7 85 D4 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffed4],0x0
007331DB  C7 85 B4 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffeb4],0x0
007331E5  EB 0F                     JMP 0x007331f6
LAB_007331e7:
007331E7  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
007331ED  83 C2 01                  ADD EDX,0x1
007331F0  89 95 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EDX
LAB_007331f6:
007331F6  83 BD B4 FE FF FF 40      CMP dword ptr [EBP + 0xfffffeb4],0x40
007331FD  7D 13                     JGE 0x00733212
007331FF  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00733205  C7 84 85 E8 FE FF FF 00 00 00 00  MOV dword ptr [EBP + EAX*0x4 + 0xfffffee8],0x0
00733210  EB D5                     JMP 0x007331e7
LAB_00733212:
00733212  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00733216  0F 8C 31 04 00 00         JL 0x0073364d
0073321C  68 00 80 00 00            PUSH 0x8000
00733221  8B 8D D8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed8]
00733227  51                        PUSH ECX
00733228  FF 15 A0 BB 85 00         CALL dword ptr [0x0085bba0]
0073322E  85 C0                     TEST EAX,EAX
00733230  74 0A                     JZ 0x0073323c
00733232  B8 FC FF FF FF            MOV EAX,0xfffffffc
00733237  E9 AD 04 00 00            JMP 0x007336e9
LAB_0073323c:
0073323C  8B 95 D8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffed8]
00733242  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00733245  C7 85 C0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffec0],0x0
0073324F  EB 0F                     JMP 0x00733260
LAB_00733251:
00733251  8B 85 C0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec0]
00733257  83 C0 01                  ADD EAX,0x1
0073325A  89 85 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],EAX
LAB_00733260:
00733260  83 BD C0 FE FF FF 08      CMP dword ptr [EBP + 0xfffffec0],0x8
00733267  0F 8D 77 01 00 00         JGE 0x007333e4
0073326D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00733270  83 C1 0C                  ADD ECX,0xc
00733273  89 8D D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],ECX
00733279  8B 95 D0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffed0]
0073327F  81 C2 F0 0F 00 00         ADD EDX,0xff0
00733285  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
0073328B  8B 85 D0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffed0]
00733291  83 78 FC FF               CMP dword ptr [EAX + -0x4],-0x1
00733295  75 0B                     JNZ 0x007332a2
00733297  8B 8D C8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec8]
0073329D  83 39 FF                  CMP dword ptr [ECX],-0x1
007332A0  74 0A                     JZ 0x007332ac
LAB_007332a2:
007332A2  B8 FB FF FF FF            MOV EAX,0xfffffffb
007332A7  E9 3D 04 00 00            JMP 0x007336e9
LAB_007332ac:
007332AC  8B 95 D0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffed0]
007332B2  8B 02                     MOV EAX,dword ptr [EDX]
007332B4  89 85 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EAX
007332BA  8B 8D B8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb8]
007332C0  89 8D AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],ECX
007332C6  8B 95 AC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeac]
007332CC  83 E2 01                  AND EDX,0x1
007332CF  85 D2                     TEST EDX,EDX
007332D1  74 36                     JZ 0x00733309
007332D3  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
007332D9  83 E8 01                  SUB EAX,0x1
007332DC  89 85 B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EAX
007332E2  81 BD B8 FE FF FF 00 04 00 00  CMP dword ptr [EBP + 0xfffffeb8],0x400
007332EC  7E 0A                     JLE 0x007332f8
007332EE  B8 FA FF FF FF            MOV EAX,0xfffffffa
007332F3  E9 F1 03 00 00            JMP 0x007336e9
LAB_007332f8:
007332F8  8B 8D D4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed4]
007332FE  83 C1 01                  ADD ECX,0x1
00733301  89 8D D4 FE FF FF         MOV dword ptr [EBP + 0xfffffed4],ECX
00733307  EB 42                     JMP 0x0073334b
LAB_00733309:
00733309  8B 95 B8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb8]
0073330F  C1 FA 04                  SAR EDX,0x4
00733312  83 EA 01                  SUB EDX,0x1
00733315  89 95 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EDX
0073331B  83 BD B4 FE FF FF 3F      CMP dword ptr [EBP + 0xfffffeb4],0x3f
00733322  7E 0A                     JLE 0x0073332e
00733324  C7 85 B4 FE FF FF 3F 00 00 00  MOV dword ptr [EBP + 0xfffffeb4],0x3f
LAB_0073332e:
0073332E  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00733334  8B 8C 85 E8 FE FF FF      MOV ECX,dword ptr [EBP + EAX*0x4 + 0xfffffee8]
0073333B  83 C1 01                  ADD ECX,0x1
0073333E  8B 95 B4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb4]
00733344  89 8C 95 E8 FE FF FF      MOV dword ptr [EBP + EDX*0x4 + 0xfffffee8],ECX
LAB_0073334b:
0073334B  83 BD B8 FE FF FF 10      CMP dword ptr [EBP + 0xfffffeb8],0x10
00733352  7C 19                     JL 0x0073336d
00733354  8B 85 B8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb8]
0073335A  83 E0 0F                  AND EAX,0xf
0073335D  85 C0                     TEST EAX,EAX
0073335F  75 0C                     JNZ 0x0073336d
00733361  81 BD B8 FE FF FF F0 0F 00 00  CMP dword ptr [EBP + 0xfffffeb8],0xff0
0073336B  7E 0A                     JLE 0x00733377
LAB_0073336d:
0073336D  B8 F9 FF FF FF            MOV EAX,0xfffffff9
00733372  E9 72 03 00 00            JMP 0x007336e9
LAB_00733377:
00733377  8B 8D D0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed0]
0073337D  03 8D B8 FE FF FF         ADD ECX,dword ptr [EBP + 0xfffffeb8]
00733383  8B 51 FC                  MOV EDX,dword ptr [ECX + -0x4]
00733386  3B 95 AC FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffeac]
0073338C  74 0A                     JZ 0x00733398
0073338E  B8 F8 FF FF FF            MOV EAX,0xfffffff8
00733393  E9 51 03 00 00            JMP 0x007336e9
LAB_00733398:
00733398  8B 85 D0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffed0]
0073339E  03 85 B8 FE FF FF         ADD EAX,dword ptr [EBP + 0xfffffeb8]
007333A4  89 85 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EAX
007333AA  8B 8D D0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed0]
007333B0  3B 8D C8 FE FF FF         CMP ECX,dword ptr [EBP + 0xfffffec8]
007333B6  0F 82 F0 FE FF FF         JC 0x007332ac
007333BC  8B 95 D0 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffed0]
007333C2  3B 95 C8 FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffec8]
007333C8  74 0A                     JZ 0x007333d4
007333CA  B8 F8 FF FF FF            MOV EAX,0xfffffff8
007333CF  E9 15 03 00 00            JMP 0x007336e9
LAB_007333d4:
007333D4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007333D7  05 00 10 00 00            ADD EAX,0x1000
007333DC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007333DF  E9 6D FE FF FF            JMP 0x00733251
LAB_007333e4:
007333E4  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
007333E7  8B 11                     MOV EDX,dword ptr [ECX]
007333E9  3B 95 D4 FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffed4]
007333EF  74 0A                     JZ 0x007333fb
007333F1  B8 F7 FF FF FF            MOV EAX,0xfffffff7
007333F6  E9 EE 02 00 00            JMP 0x007336e9
LAB_007333fb:
007333FB  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007333FE  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
00733404  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0073340B  EB 09                     JMP 0x00733416
LAB_0073340d:
0073340D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00733410  83 C1 01                  ADD ECX,0x1
00733413  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_00733416:
00733416  83 7D EC 40               CMP dword ptr [EBP + -0x14],0x40
0073341A  0F 8D 2D 02 00 00         JGE 0x0073364d
00733420  C7 85 98 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffe98],0x0
0073342A  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
00733430  89 95 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EDX
LAB_00733436:
00733436  8B 85 D0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffed0]
0073343C  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0073343F  89 8D A4 FE FF FF         MOV dword ptr [EBP + 0xfffffea4],ECX
00733445  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
0073344B  3B 95 CC FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffecc]
00733451  0F 84 23 01 00 00         JZ 0x0073357a
00733457  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0073345A  8B 8D 98 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe98]
00733460  3B 8C 85 E8 FE FF FF      CMP ECX,dword ptr [EBP + EAX*0x4 + 0xfffffee8]
00733467  0F 84 0D 01 00 00         JZ 0x0073357a
0073346D  8B 95 A4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea4]
00733473  3B 95 D8 FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffed8]
00733479  72 13                     JC 0x0073348e
0073347B  8B 85 D8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffed8]
00733481  05 00 80 00 00            ADD EAX,0x8000
00733486  39 85 A4 FE FF FF         CMP dword ptr [EBP + 0xfffffea4],EAX
0073348C  72 0A                     JC 0x00733498
LAB_0073348e:
0073348E  B8 F6 FF FF FF            MOV EAX,0xfffffff6
00733493  E9 51 02 00 00            JMP 0x007336e9
LAB_00733498:
00733498  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
0073349E  81 E1 00 F0 FF FF         AND ECX,0xfffff000
007334A4  89 8D 9C FE FF FF         MOV dword ptr [EBP + 0xfffffe9c],ECX
007334AA  8B 95 9C FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe9c]
007334B0  83 C2 0C                  ADD EDX,0xc
007334B3  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
007334B6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007334B9  05 F0 0F 00 00            ADD EAX,0xff0
007334BE  89 85 DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],EAX
LAB_007334c4:
007334C4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007334C7  3B 8D DC FE FF FF         CMP ECX,dword ptr [EBP + 0xfffffedc]
007334CD  74 1F                     JZ 0x007334ee
007334CF  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
007334D2  3B 95 A4 FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffea4]
007334D8  75 02                     JNZ 0x007334dc
007334DA  EB 12                     JMP 0x007334ee
LAB_007334dc:
007334DC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007334DF  8B 08                     MOV ECX,dword ptr [EAX]
007334E1  83 E1 FE                  AND ECX,0xfffffffe
007334E4  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
007334E7  03 D1                     ADD EDX,ECX
007334E9  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
007334EC  EB D6                     JMP 0x007334c4
LAB_007334ee:
007334EE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007334F1  3B 85 DC FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffedc]
007334F7  75 0A                     JNZ 0x00733503
007334F9  B8 F5 FF FF FF            MOV EAX,0xfffffff5
007334FE  E9 E6 01 00 00            JMP 0x007336e9
LAB_00733503:
00733503  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00733509  8B 11                     MOV EDX,dword ptr [ECX]
0073350B  C1 FA 04                  SAR EDX,0x4
0073350E  83 EA 01                  SUB EDX,0x1
00733511  89 95 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],EDX
00733517  83 BD B4 FE FF FF 3F      CMP dword ptr [EBP + 0xfffffeb4],0x3f
0073351E  7E 0A                     JLE 0x0073352a
00733520  C7 85 B4 FE FF FF 3F 00 00 00  MOV dword ptr [EBP + 0xfffffeb4],0x3f
LAB_0073352a:
0073352A  8B 85 B4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb4]
00733530  3B 45 EC                  CMP EAX,dword ptr [EBP + -0x14]
00733533  74 0A                     JZ 0x0073353f
00733535  B8 F4 FF FF FF            MOV EAX,0xfffffff4
0073353A  E9 AA 01 00 00            JMP 0x007336e9
LAB_0073353f:
0073353F  8B 8D A4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffea4]
00733545  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00733548  3B 95 D0 FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffed0]
0073354E  74 0A                     JZ 0x0073355a
00733550  B8 F3 FF FF FF            MOV EAX,0xfffffff3
00733555  E9 8F 01 00 00            JMP 0x007336e9
LAB_0073355a:
0073355A  8B 85 A4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea4]
00733560  89 85 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EAX
00733566  8B 8D 98 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe98]
0073356C  83 C1 01                  ADD ECX,0x1
0073356F  89 8D 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],ECX
00733575  E9 BC FE FF FF            JMP 0x00733436
LAB_0073357a:
0073357A  83 BD 98 FE FF FF 00      CMP dword ptr [EBP + 0xfffffe98],0x0
00733581  74 6E                     JZ 0x007335f1
00733583  83 7D EC 20               CMP dword ptr [EBP + -0x14],0x20
00733587  7D 32                     JGE 0x007335bb
00733589  BA 00 00 00 80            MOV EDX,0x80000000
0073358E  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00733591  D3 EA                     SHR EDX,CL
00733593  8B 85 E4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee4]
00733599  0B C2                     OR EAX,EDX
0073359B  89 85 E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],EAX
007335A1  BA 00 00 00 80            MOV EDX,0x80000000
007335A6  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
007335A9  D3 EA                     SHR EDX,CL
007335AB  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
007335B1  0B C2                     OR EAX,EDX
007335B3  89 85 BC FE FF FF         MOV dword ptr [EBP + 0xfffffebc],EAX
007335B9  EB 36                     JMP 0x007335f1
LAB_007335bb:
007335BB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
007335BE  83 E9 20                  SUB ECX,0x20
007335C1  BA 00 00 00 80            MOV EDX,0x80000000
007335C6  D3 EA                     SHR EDX,CL
007335C8  8B 85 B0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeb0]
007335CE  0B C2                     OR EAX,EDX
007335D0  89 85 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EAX
007335D6  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
007335D9  83 E9 20                  SUB ECX,0x20
007335DC  BA 00 00 00 80            MOV EDX,0x80000000
007335E1  D3 EA                     SHR EDX,CL
007335E3  8B 85 A8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea8]
007335E9  0B C2                     OR EAX,EDX
007335EB  89 85 A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],EAX
LAB_007335f1:
007335F1  8B 8D D0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffed0]
007335F7  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
007335FA  3B 95 CC FE FF FF         CMP EDX,dword ptr [EBP + 0xfffffecc]
00733600  75 12                     JNZ 0x00733614
00733602  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00733605  8B 8D 98 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffe98]
0073360B  3B 8C 85 E8 FE FF FF      CMP ECX,dword ptr [EBP + EAX*0x4 + 0xfffffee8]
00733612  74 0A                     JZ 0x0073361e
LAB_00733614:
00733614  B8 F2 FF FF FF            MOV EAX,0xfffffff2
00733619  E9 CB 00 00 00            JMP 0x007336e9
LAB_0073361e:
0073361E  8B 95 CC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffecc]
00733624  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00733627  3B 85 D0 FE FF FF         CMP EAX,dword ptr [EBP + 0xfffffed0]
0073362D  74 0A                     JZ 0x00733639
0073362F  B8 F1 FF FF FF            MOV EAX,0xfffffff1
00733634  E9 B0 00 00 00            JMP 0x007336e9
LAB_00733639:
00733639  8B 8D CC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffecc]
0073363F  83 C1 08                  ADD ECX,0x8
00733642  89 8D CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],ECX
00733648  E9 C0 FD FF FF            JMP 0x0073340d
LAB_0073364d:
0073364D  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00733650  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
00733656  8B 8D E4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee4]
0073365C  3B 4C 90 44               CMP ECX,dword ptr [EAX + EDX*0x4 + 0x44]
00733660  75 18                     JNZ 0x0073367a
00733662  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00733665  8B 85 A0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffea0]
0073366B  8B 8D B0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeb0]
00733671  3B 8C 90 C4 00 00 00      CMP ECX,dword ptr [EAX + EDX*0x4 + 0xc4]
00733678  74 07                     JZ 0x00733681
LAB_0073367a:
0073367A  B8 F0 FF FF FF            MOV EAX,0xfffffff0
0073367F  EB 68                     JMP 0x007336e9
LAB_00733681:
00733681  8B 95 D8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffed8]
00733687  81 C2 00 80 00 00         ADD EDX,0x8000
0073368D  89 95 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EDX
00733693  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00733696  05 04 02 00 00            ADD EAX,0x204
0073369B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0073369E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007336A1  D1 E1                     SHL ECX,0x1
007336A3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007336A6  E9 FF FA FF FF            JMP 0x007331aa
LAB_007336ab:
007336AB  8B 95 C4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec4]
007336B1  8B 85 BC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffebc]
007336B7  3B 02                     CMP EAX,dword ptr [EDX]
007336B9  75 11                     JNZ 0x007336cc
007336BB  8B 8D C4 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffec4]
007336C1  8B 95 A8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffea8]
007336C7  3B 51 04                  CMP EDX,dword ptr [ECX + 0x4]
007336CA  74 07                     JZ 0x007336d3
LAB_007336cc:
007336CC  B8 EF FF FF FF            MOV EAX,0xffffffef
007336D1  EB 16                     JMP 0x007336e9
LAB_007336d3:
007336D3  8B 85 C4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffec4]
007336D9  83 C0 14                  ADD EAX,0x14
007336DC  89 85 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EAX
007336E2  E9 2C FA FF FF            JMP 0x00733113
LAB_007336e7:
007336E7  33 C0                     XOR EAX,EAX
LAB_007336e9:
007336E9  8B E5                     MOV ESP,EBP
007336EB  5D                        POP EBP
007336EC  C3                        RET
