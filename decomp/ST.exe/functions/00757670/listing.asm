FUN_00757670:
00757670  55                        PUSH EBP
00757671  8B EC                     MOV EBP,ESP
00757673  53                        PUSH EBX
00757674  56                        PUSH ESI
00757675  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00757678  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075767B  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0075767E  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
00757682  51                        PUSH ECX
00757683  53                        PUSH EBX
00757684  50                        PUSH EAX
00757685  E8 C6 D5 F7 FF            CALL 0x006d4c50
0075768A  85 C0                     TEST EAX,EAX
0075768C  75 2C                     JNZ 0x007576ba
0075768E  57                        PUSH EDI
0075768F  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
00757692  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
00757695  03 CB                     ADD ECX,EBX
00757697  8B 11                     MOV EDX,dword ptr [ECX]
00757699  85 D2                     TEST EDX,EDX
0075769B  75 03                     JNZ 0x007576a0
0075769D  83 CA FF                  OR EDX,0xffffffff
LAB_007576a0:
007576A0  8B 7F 1C                  MOV EDI,dword ptr [EDI + 0x1c]
007576A3  89 39                     MOV dword ptr [ECX],EDI
007576A5  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
007576A8  89 57 1C                  MOV dword ptr [EDI + 0x1c],EDX
007576AB  C7 41 04 FE FF FF FF      MOV dword ptr [ECX + 0x4],0xfffffffe
007576B2  8B 76 08                  MOV ESI,dword ptr [ESI + 0x8]
007576B5  5F                        POP EDI
007576B6  83 4E 08 10               OR dword ptr [ESI + 0x8],0x10
LAB_007576ba:
007576BA  5E                        POP ESI
007576BB  5B                        POP EBX
007576BC  5D                        POP EBP
007576BD  C2 08 00                  RET 0x8
