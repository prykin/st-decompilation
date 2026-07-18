FUN_006ba600:
006BA600  55                        PUSH EBP
006BA601  8B EC                     MOV EBP,ESP
006BA603  56                        PUSH ESI
006BA604  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BA607  57                        PUSH EDI
006BA608  33 FF                     XOR EDI,EDI
006BA60A  3B F7                     CMP ESI,EDI
006BA60C  0F 84 23 01 00 00         JZ 0x006ba735
006BA612  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006BA619  74 0D                     JZ 0x006ba628
006BA61B  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006BA621  50                        PUSH EAX
006BA622  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006ba628:
006BA628  8B 06                     MOV EAX,dword ptr [ESI]
006BA62A  53                        PUSH EBX
006BA62B  8B 1D 78 BA 85 00         MOV EBX,dword ptr [0x0085ba78]
006BA631  3B C7                     CMP EAX,EDI
006BA633  74 03                     JZ 0x006ba638
006BA635  50                        PUSH EAX
006BA636  FF D3                     CALL EBX
LAB_006ba638:
006BA638  8B 86 B4 04 00 00         MOV EAX,dword ptr [ESI + 0x4b4]
006BA63E  3B C7                     CMP EAX,EDI
006BA640  74 03                     JZ 0x006ba645
006BA642  50                        PUSH EAX
006BA643  FF D3                     CALL EBX
LAB_006ba645:
006BA645  8B 86 94 04 00 00         MOV EAX,dword ptr [ESI + 0x494]
006BA64B  3B C7                     CMP EAX,EDI
006BA64D  74 03                     JZ 0x006ba652
006BA64F  50                        PUSH EAX
006BA650  FF D3                     CALL EBX
LAB_006ba652:
006BA652  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006BA655  3B C7                     CMP EAX,EDI
006BA657  74 09                     JZ 0x006ba662
006BA659  8B 08                     MOV ECX,dword ptr [EAX]
006BA65B  50                        PUSH EAX
006BA65C  FF 51 08                  CALL dword ptr [ECX + 0x8]
006BA65F  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
LAB_006ba662:
006BA662  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
006BA665  3B C7                     CMP EAX,EDI
006BA667  74 09                     JZ 0x006ba672
006BA669  8B 10                     MOV EDX,dword ptr [EAX]
006BA66B  50                        PUSH EAX
006BA66C  FF 52 08                  CALL dword ptr [EDX + 0x8]
006BA66F  89 7E 44                  MOV dword ptr [ESI + 0x44],EDI
LAB_006ba672:
006BA672  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
006BA675  3B C7                     CMP EAX,EDI
006BA677  74 09                     JZ 0x006ba682
006BA679  8B 08                     MOV ECX,dword ptr [EAX]
006BA67B  50                        PUSH EAX
006BA67C  FF 51 08                  CALL dword ptr [ECX + 0x8]
006BA67F  89 7E 48                  MOV dword ptr [ESI + 0x48],EDI
LAB_006ba682:
006BA682  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006BA685  3B C7                     CMP EAX,EDI
006BA687  74 09                     JZ 0x006ba692
006BA689  8B 10                     MOV EDX,dword ptr [EAX]
006BA68B  50                        PUSH EAX
006BA68C  FF 52 08                  CALL dword ptr [EDX + 0x8]
006BA68F  89 7E 3C                  MOV dword ptr [ESI + 0x3c],EDI
LAB_006ba692:
006BA692  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006BA695  3B C7                     CMP EAX,EDI
006BA697  74 09                     JZ 0x006ba6a2
006BA699  8B 08                     MOV ECX,dword ptr [EAX]
006BA69B  50                        PUSH EAX
006BA69C  FF 51 08                  CALL dword ptr [ECX + 0x8]
006BA69F  89 7E 38                  MOV dword ptr [ESI + 0x38],EDI
LAB_006ba6a2:
006BA6A2  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
006BA6A5  3B C7                     CMP EAX,EDI
006BA6A7  74 09                     JZ 0x006ba6b2
006BA6A9  8B 10                     MOV EDX,dword ptr [EAX]
006BA6AB  50                        PUSH EAX
006BA6AC  FF 52 08                  CALL dword ptr [EDX + 0x8]
006BA6AF  89 7E 34                  MOV dword ptr [ESI + 0x34],EDI
LAB_006ba6b2:
006BA6B2  F6 46 08 01               TEST byte ptr [ESI + 0x8],0x1
006BA6B6  74 0D                     JZ 0x006ba6c5
006BA6B8  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006BA6BB  3B C7                     CMP EAX,EDI
006BA6BD  74 06                     JZ 0x006ba6c5
006BA6BF  8B 08                     MOV ECX,dword ptr [EAX]
006BA6C1  50                        PUSH EAX
006BA6C2  FF 51 4C                  CALL dword ptr [ECX + 0x4c]
LAB_006ba6c5:
006BA6C5  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006BA6C8  3B C7                     CMP EAX,EDI
006BA6CA  74 09                     JZ 0x006ba6d5
006BA6CC  8B 10                     MOV EDX,dword ptr [EAX]
006BA6CE  50                        PUSH EAX
006BA6CF  FF 52 08                  CALL dword ptr [EDX + 0x8]
006BA6D2  89 7E 30                  MOV dword ptr [ESI + 0x30],EDI
LAB_006ba6d5:
006BA6D5  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
006BA6D8  3B C7                     CMP EAX,EDI
006BA6DA  74 09                     JZ 0x006ba6e5
006BA6DC  8B 08                     MOV ECX,dword ptr [EAX]
006BA6DE  50                        PUSH EAX
006BA6DF  FF 51 08                  CALL dword ptr [ECX + 0x8]
006BA6E2  89 7E 2C                  MOV dword ptr [ESI + 0x2c],EDI
LAB_006ba6e5:
006BA6E5  8D 96 C0 04 00 00         LEA EDX,[ESI + 0x4c0]
006BA6EB  52                        PUSH EDX
006BA6EC  E8 6F 09 FF FF            CALL 0x006ab060
006BA6F1  8D 86 DC 04 00 00         LEA EAX,[ESI + 0x4dc]
006BA6F7  50                        PUSH EAX
006BA6F8  E8 63 09 FF FF            CALL 0x006ab060
006BA6FD  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
006BA703  3B C7                     CMP EAX,EDI
006BA705  74 03                     JZ 0x006ba70a
006BA707  50                        PUSH EAX
006BA708  FF D3                     CALL EBX
LAB_006ba70a:
006BA70A  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BA70D  5B                        POP EBX
006BA70E  A9 00 00 00 04            TEST EAX,0x4000000
006BA713  74 0D                     JZ 0x006ba722
006BA715  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006BA71B  51                        PUSH ECX
006BA71C  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006ba722:
006BA722  8D 96 F0 04 00 00         LEA EDX,[ESI + 0x4f0]
006BA728  52                        PUSH EDX
006BA729  FF 15 84 BB 85 00         CALL dword ptr [0x0085bb84]
006BA72F  56                        PUSH ESI
006BA730  E8 5B B7 FE FF            CALL 0x006a5e90
LAB_006ba735:
006BA735  5F                        POP EDI
006BA736  5E                        POP ESI
006BA737  5D                        POP EBP
006BA738  C2 04 00                  RET 0x4
