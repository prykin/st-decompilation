FUN_006de570:
006DE570  55                        PUSH EBP
006DE571  8B EC                     MOV EBP,ESP
006DE573  83 EC 28                  SUB ESP,0x28
006DE576  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DE579  53                        PUSH EBX
006DE57A  56                        PUSH ESI
006DE57B  8B F1                     MOV ESI,ECX
006DE57D  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
006DE580  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006DE583  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006DE586  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006DE589  DB 45 08                  FILD dword ptr [EBP + 0x8]
006DE58C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006DE58F  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
006DE592  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006DE595  57                        PUSH EDI
006DE596  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006DE59C  6A 01                     PUSH 0x1
006DE59E  53                        PUSH EBX
006DE59F  51                        PUSH ECX
006DE5A0  B8 D0 8A FF FF            MOV EAX,0xffff8ad0
006DE5A5  6A 00                     PUSH 0x0
006DE5A7  6A 00                     PUSH 0x0
006DE5A9  D9 5D E8                  FSTP float ptr [EBP + -0x18]
006DE5AC  DB 45 08                  FILD dword ptr [EBP + 0x8]
006DE5AF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006DE5B2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006DE5B5  6A 00                     PUSH 0x0
006DE5B7  8D 55 E8                  LEA EDX,[EBP + -0x18]
006DE5BA  DC 8E C8 00 00 00         FMUL double ptr [ESI + 0xc8]
006DE5C0  6A 00                     PUSH 0x0
006DE5C2  8D 45 D8                  LEA EAX,[EBP + -0x28]
006DE5C5  BF 30 75 00 00            MOV EDI,0x7530
006DE5CA  52                        PUSH EDX
006DE5CB  50                        PUSH EAX
006DE5CC  8B CE                     MOV ECX,ESI
006DE5CE  D9 5D EC                  FSTP float ptr [EBP + -0x14]
006DE5D1  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
006DE5D8  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
006DE5DB  E8 F0 3F 00 00            CALL 0x006e25d0
006DE5E0  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006DE5E3  C1 F8 10                  SAR EAX,0x10
006DE5E6  3B C7                     CMP EAX,EDI
006DE5E8  7D 02                     JGE 0x006de5ec
006DE5EA  8B F8                     MOV EDI,EAX
LAB_006de5ec:
006DE5EC  3D D0 8A FF FF            CMP EAX,0xffff8ad0
006DE5F1  7E 03                     JLE 0x006de5f6
006DE5F3  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006de5f6:
006DE5F6  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006DE5F9  C1 F9 10                  SAR ECX,0x10
006DE5FC  81 F9 30 75 00 00         CMP ECX,0x7530
006DE602  7D 03                     JGE 0x006de607
006DE604  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_006de607:
006DE607  81 F9 D0 8A FF FF         CMP ECX,0xffff8ad0
006DE60D  7E 03                     JLE 0x006de612
006DE60F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006de612:
006DE612  3B 46 30                  CMP EAX,dword ptr [ESI + 0x30]
006DE615  7C 1D                     JL 0x006de634
006DE617  3B 46 38                  CMP EAX,dword ptr [ESI + 0x38]
006DE61A  7D 18                     JGE 0x006de634
006DE61C  3B 4E 34                  CMP ECX,dword ptr [ESI + 0x34]
006DE61F  7C 13                     JL 0x006de634
006DE621  3B 4E 3C                  CMP ECX,dword ptr [ESI + 0x3c]
006DE624  7D 0E                     JGE 0x006de634
006DE626  5F                        POP EDI
006DE627  5E                        POP ESI
006DE628  B8 01 00 00 00            MOV EAX,0x1
006DE62D  5B                        POP EBX
006DE62E  8B E5                     MOV ESP,EBP
006DE630  5D                        POP EBP
006DE631  C2 18 00                  RET 0x18
LAB_006de634:
006DE634  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006DE637  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006DE63A  6A 01                     PUSH 0x1
006DE63C  51                        PUSH ECX
006DE63D  52                        PUSH EDX
006DE63E  6A 00                     PUSH 0x0
006DE640  6A 00                     PUSH 0x0
006DE642  6A 00                     PUSH 0x0
006DE644  8D 45 E8                  LEA EAX,[EBP + -0x18]
006DE647  6A 00                     PUSH 0x0
006DE649  8D 4D D8                  LEA ECX,[EBP + -0x28]
006DE64C  50                        PUSH EAX
006DE64D  51                        PUSH ECX
006DE64E  8B CE                     MOV ECX,ESI
006DE650  E8 7B 3F 00 00            CALL 0x006e25d0
006DE655  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006DE658  C1 F8 10                  SAR EAX,0x10
006DE65B  3B C7                     CMP EAX,EDI
006DE65D  7D 02                     JGE 0x006de661
006DE65F  8B F8                     MOV EDI,EAX
LAB_006de661:
006DE661  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
006DE664  7E 03                     JLE 0x006de669
006DE666  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006de669:
006DE669  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006DE66C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006DE66F  C1 F9 10                  SAR ECX,0x10
006DE672  3B CA                     CMP ECX,EDX
006DE674  7D 03                     JGE 0x006de679
006DE676  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_006de679:
006DE679  3B 4D FC                  CMP ECX,dword ptr [EBP + -0x4]
006DE67C  7E 03                     JLE 0x006de681
006DE67E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006de681:
006DE681  3B 46 30                  CMP EAX,dword ptr [ESI + 0x30]
006DE684  7C 1D                     JL 0x006de6a3
006DE686  3B 46 38                  CMP EAX,dword ptr [ESI + 0x38]
006DE689  7D 18                     JGE 0x006de6a3
006DE68B  3B 4E 34                  CMP ECX,dword ptr [ESI + 0x34]
006DE68E  7C 13                     JL 0x006de6a3
006DE690  3B 4E 3C                  CMP ECX,dword ptr [ESI + 0x3c]
006DE693  7D 0E                     JGE 0x006de6a3
006DE695  5F                        POP EDI
006DE696  5E                        POP ESI
006DE697  B8 01 00 00 00            MOV EAX,0x1
006DE69C  5B                        POP EBX
006DE69D  8B E5                     MOV ESP,EBP
006DE69F  5D                        POP EBP
006DE6A0  C2 18 00                  RET 0x18
LAB_006de6a3:
006DE6A3  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
006DE6A9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006DE6AC  6A 01                     PUSH 0x1
006DE6AE  DC C0                     FADD ST0,ST0
006DE6B0  53                        PUSH EBX
006DE6B1  52                        PUSH EDX
006DE6B2  DD 5D F4                  FSTP double ptr [EBP + -0xc]
006DE6B5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006DE6B8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006DE6BB  50                        PUSH EAX
006DE6BC  51                        PUSH ECX
006DE6BD  50                        PUSH EAX
006DE6BE  51                        PUSH ECX
006DE6BF  8D 45 E8                  LEA EAX,[EBP + -0x18]
006DE6C2  8D 4D D8                  LEA ECX,[EBP + -0x28]
006DE6C5  50                        PUSH EAX
006DE6C6  51                        PUSH ECX
006DE6C7  8B CE                     MOV ECX,ESI
006DE6C9  E8 02 3F 00 00            CALL 0x006e25d0
006DE6CE  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006DE6D1  C1 F8 10                  SAR EAX,0x10
006DE6D4  3B C7                     CMP EAX,EDI
006DE6D6  7D 02                     JGE 0x006de6da
006DE6D8  8B F8                     MOV EDI,EAX
LAB_006de6da:
006DE6DA  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
006DE6DD  7E 03                     JLE 0x006de6e2
006DE6DF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006de6e2:
006DE6E2  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006DE6E5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006DE6E8  C1 F9 10                  SAR ECX,0x10
006DE6EB  3B CA                     CMP ECX,EDX
006DE6ED  7D 03                     JGE 0x006de6f2
006DE6EF  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_006de6f2:
006DE6F2  3B 4D FC                  CMP ECX,dword ptr [EBP + -0x4]
006DE6F5  7E 03                     JLE 0x006de6fa
006DE6F7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006de6fa:
006DE6FA  3B 46 30                  CMP EAX,dword ptr [ESI + 0x30]
006DE6FD  7C 1D                     JL 0x006de71c
006DE6FF  3B 46 38                  CMP EAX,dword ptr [ESI + 0x38]
006DE702  7D 18                     JGE 0x006de71c
006DE704  3B 4E 34                  CMP ECX,dword ptr [ESI + 0x34]
006DE707  7C 13                     JL 0x006de71c
006DE709  3B 4E 3C                  CMP ECX,dword ptr [ESI + 0x3c]
006DE70C  7D 0E                     JGE 0x006de71c
006DE70E  5F                        POP EDI
006DE70F  5E                        POP ESI
006DE710  B8 01 00 00 00            MOV EAX,0x1
006DE715  5B                        POP EBX
006DE716  8B E5                     MOV ESP,EBP
006DE718  5D                        POP EBP
006DE719  C2 18 00                  RET 0x18
LAB_006de71c:
006DE71C  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
006DE722  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006DE725  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006DE728  DC C0                     FADD ST0,ST0
006DE72A  6A 01                     PUSH 0x1
006DE72C  52                        PUSH EDX
006DE72D  50                        PUSH EAX
006DE72E  8D 55 D8                  LEA EDX,[EBP + -0x28]
006DE731  DD 5D F4                  FSTP double ptr [EBP + -0xc]
006DE734  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006DE737  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006DE73A  50                        PUSH EAX
006DE73B  51                        PUSH ECX
006DE73C  50                        PUSH EAX
006DE73D  51                        PUSH ECX
006DE73E  8D 4D E8                  LEA ECX,[EBP + -0x18]
006DE741  51                        PUSH ECX
006DE742  52                        PUSH EDX
006DE743  8B CE                     MOV ECX,ESI
006DE745  E8 86 3E 00 00            CALL 0x006e25d0
006DE74A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006DE74D  C1 F8 10                  SAR EAX,0x10
006DE750  3B C7                     CMP EAX,EDI
006DE752  7D 02                     JGE 0x006de756
006DE754  8B F8                     MOV EDI,EAX
LAB_006de756:
006DE756  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
006DE759  7E 03                     JLE 0x006de75e
006DE75B  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006de75e:
006DE75E  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006DE761  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006DE764  C1 F9 10                  SAR ECX,0x10
006DE767  3B CA                     CMP ECX,EDX
006DE769  7D 03                     JGE 0x006de76e
006DE76B  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_006de76e:
006DE76E  3B 4D FC                  CMP ECX,dword ptr [EBP + -0x4]
006DE771  7E 03                     JLE 0x006de776
006DE773  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006de776:
006DE776  3B 46 30                  CMP EAX,dword ptr [ESI + 0x30]
006DE779  7C 1D                     JL 0x006de798
006DE77B  3B 46 38                  CMP EAX,dword ptr [ESI + 0x38]
006DE77E  7D 18                     JGE 0x006de798
006DE780  3B 4E 34                  CMP ECX,dword ptr [ESI + 0x34]
006DE783  7C 13                     JL 0x006de798
006DE785  3B 4E 3C                  CMP ECX,dword ptr [ESI + 0x3c]
006DE788  7D 0E                     JGE 0x006de798
006DE78A  5F                        POP EDI
006DE78B  5E                        POP ESI
006DE78C  B8 01 00 00 00            MOV EAX,0x1
006DE791  5B                        POP EBX
006DE792  8B E5                     MOV ESP,EBP
006DE794  5D                        POP EBP
006DE795  C2 18 00                  RET 0x18
LAB_006de798:
006DE798  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006DE79B  6A 01                     PUSH 0x1
006DE79D  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
006DE7A3  53                        PUSH EBX
006DE7A4  50                        PUSH EAX
006DE7A5  6A 00                     PUSH 0x0
006DE7A7  6A 00                     PUSH 0x0
006DE7A9  DC C0                     FADD ST0,ST0
006DE7AB  83 EC 08                  SUB ESP,0x8
006DE7AE  8D 4D E8                  LEA ECX,[EBP + -0x18]
006DE7B1  8D 55 D8                  LEA EDX,[EBP + -0x28]
006DE7B4  DD 1C 24                  FSTP double ptr [ESP]
006DE7B7  51                        PUSH ECX
006DE7B8  52                        PUSH EDX
006DE7B9  8B CE                     MOV ECX,ESI
006DE7BB  E8 10 3E 00 00            CALL 0x006e25d0
006DE7C0  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006DE7C3  C1 F8 10                  SAR EAX,0x10
006DE7C6  3B C7                     CMP EAX,EDI
006DE7C8  7D 02                     JGE 0x006de7cc
006DE7CA  8B F8                     MOV EDI,EAX
LAB_006de7cc:
006DE7CC  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
006DE7CF  7E 03                     JLE 0x006de7d4
006DE7D1  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006de7d4:
006DE7D4  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006DE7D7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006DE7DA  C1 F9 10                  SAR ECX,0x10
006DE7DD  3B CA                     CMP ECX,EDX
006DE7DF  7D 03                     JGE 0x006de7e4
006DE7E1  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_006de7e4:
006DE7E4  3B 4D FC                  CMP ECX,dword ptr [EBP + -0x4]
006DE7E7  7E 03                     JLE 0x006de7ec
006DE7E9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006de7ec:
006DE7EC  3B 46 30                  CMP EAX,dword ptr [ESI + 0x30]
006DE7EF  7C 1D                     JL 0x006de80e
006DE7F1  3B 46 38                  CMP EAX,dword ptr [ESI + 0x38]
006DE7F4  7D 18                     JGE 0x006de80e
006DE7F6  3B 4E 34                  CMP ECX,dword ptr [ESI + 0x34]
006DE7F9  7C 13                     JL 0x006de80e
006DE7FB  3B 4E 3C                  CMP ECX,dword ptr [ESI + 0x3c]
006DE7FE  7D 0E                     JGE 0x006de80e
006DE800  5F                        POP EDI
006DE801  5E                        POP ESI
006DE802  B8 01 00 00 00            MOV EAX,0x1
006DE807  5B                        POP EBX
006DE808  8B E5                     MOV ESP,EBP
006DE80A  5D                        POP EBP
006DE80B  C2 18 00                  RET 0x18
LAB_006de80e:
006DE80E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006DE811  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DE814  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
006DE81A  6A 01                     PUSH 0x1
006DE81C  50                        PUSH EAX
006DE81D  51                        PUSH ECX
006DE81E  6A 00                     PUSH 0x0
006DE820  6A 00                     PUSH 0x0
006DE822  8D 55 E8                  LEA EDX,[EBP + -0x18]
006DE825  DC C0                     FADD ST0,ST0
006DE827  83 EC 08                  SUB ESP,0x8
006DE82A  8D 45 D8                  LEA EAX,[EBP + -0x28]
006DE82D  8B CE                     MOV ECX,ESI
006DE82F  DD 1C 24                  FSTP double ptr [ESP]
006DE832  52                        PUSH EDX
006DE833  50                        PUSH EAX
006DE834  E8 97 3D 00 00            CALL 0x006e25d0
006DE839  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006DE83C  C1 F8 10                  SAR EAX,0x10
006DE83F  3B C7                     CMP EAX,EDI
006DE841  7D 02                     JGE 0x006de845
006DE843  8B F8                     MOV EDI,EAX
LAB_006de845:
006DE845  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
006DE848  7E 03                     JLE 0x006de84d
006DE84A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006de84d:
006DE84D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006DE850  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006DE853  C1 F9 10                  SAR ECX,0x10
006DE856  3B CA                     CMP ECX,EDX
006DE858  7D 03                     JGE 0x006de85d
006DE85A  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_006de85d:
006DE85D  3B 4D FC                  CMP ECX,dword ptr [EBP + -0x4]
006DE860  7E 03                     JLE 0x006de865
006DE862  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006de865:
006DE865  3B 46 30                  CMP EAX,dword ptr [ESI + 0x30]
006DE868  7C 1D                     JL 0x006de887
006DE86A  3B 46 38                  CMP EAX,dword ptr [ESI + 0x38]
006DE86D  7D 18                     JGE 0x006de887
006DE86F  3B 4E 34                  CMP ECX,dword ptr [ESI + 0x34]
006DE872  7C 13                     JL 0x006de887
006DE874  3B 4E 3C                  CMP ECX,dword ptr [ESI + 0x3c]
006DE877  7D 0E                     JGE 0x006de887
006DE879  5F                        POP EDI
006DE87A  5E                        POP ESI
006DE87B  B8 01 00 00 00            MOV EAX,0x1
006DE880  5B                        POP EBX
006DE881  8B E5                     MOV ESP,EBP
006DE883  5D                        POP EBP
006DE884  C2 18 00                  RET 0x18
LAB_006de887:
006DE887  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006DE88A  6A 01                     PUSH 0x1
006DE88C  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
006DE892  53                        PUSH EBX
006DE893  51                        PUSH ECX
006DE894  DC C0                     FADD ST0,ST0
006DE896  83 EC 08                  SUB ESP,0x8
006DE899  8D 55 E8                  LEA EDX,[EBP + -0x18]
006DE89C  8D 45 D8                  LEA EAX,[EBP + -0x28]
006DE89F  8B CE                     MOV ECX,ESI
006DE8A1  DD 1C 24                  FSTP double ptr [ESP]
006DE8A4  6A 00                     PUSH 0x0
006DE8A6  6A 00                     PUSH 0x0
006DE8A8  52                        PUSH EDX
006DE8A9  50                        PUSH EAX
006DE8AA  E8 21 3D 00 00            CALL 0x006e25d0
006DE8AF  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006DE8B2  C1 F8 10                  SAR EAX,0x10
006DE8B5  3B C7                     CMP EAX,EDI
006DE8B7  7D 02                     JGE 0x006de8bb
006DE8B9  8B F8                     MOV EDI,EAX
LAB_006de8bb:
006DE8BB  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
006DE8BE  7E 03                     JLE 0x006de8c3
006DE8C0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006de8c3:
006DE8C3  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006DE8C6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006DE8C9  C1 F9 10                  SAR ECX,0x10
006DE8CC  3B CA                     CMP ECX,EDX
006DE8CE  7D 03                     JGE 0x006de8d3
006DE8D0  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_006de8d3:
006DE8D3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006DE8D6  3B CB                     CMP ECX,EBX
006DE8D8  7E 02                     JLE 0x006de8dc
006DE8DA  8B D9                     MOV EBX,ECX
LAB_006de8dc:
006DE8DC  3B 46 30                  CMP EAX,dword ptr [ESI + 0x30]
006DE8DF  7C 1D                     JL 0x006de8fe
006DE8E1  3B 46 38                  CMP EAX,dword ptr [ESI + 0x38]
006DE8E4  7D 18                     JGE 0x006de8fe
006DE8E6  3B 4E 34                  CMP ECX,dword ptr [ESI + 0x34]
006DE8E9  7C 13                     JL 0x006de8fe
006DE8EB  3B 4E 3C                  CMP ECX,dword ptr [ESI + 0x3c]
006DE8EE  7D 0E                     JGE 0x006de8fe
006DE8F0  5F                        POP EDI
006DE8F1  5E                        POP ESI
006DE8F2  B8 01 00 00 00            MOV EAX,0x1
006DE8F7  5B                        POP EBX
006DE8F8  8B E5                     MOV ESP,EBP
006DE8FA  5D                        POP EBP
006DE8FB  C2 18 00                  RET 0x18
LAB_006de8fe:
006DE8FE  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006DE901  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006DE904  DD 86 C8 00 00 00         FLD double ptr [ESI + 0xc8]
006DE90A  6A 01                     PUSH 0x1
006DE90C  51                        PUSH ECX
006DE90D  52                        PUSH EDX
006DE90E  8D 45 E8                  LEA EAX,[EBP + -0x18]
006DE911  DC C0                     FADD ST0,ST0
006DE913  83 EC 08                  SUB ESP,0x8
006DE916  8D 4D D8                  LEA ECX,[EBP + -0x28]
006DE919  DD 1C 24                  FSTP double ptr [ESP]
006DE91C  6A 00                     PUSH 0x0
006DE91E  6A 00                     PUSH 0x0
006DE920  50                        PUSH EAX
006DE921  51                        PUSH ECX
006DE922  8B CE                     MOV ECX,ESI
006DE924  E8 A7 3C 00 00            CALL 0x006e25d0
006DE929  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006DE92C  C1 F8 10                  SAR EAX,0x10
006DE92F  3B C7                     CMP EAX,EDI
006DE931  7D 02                     JGE 0x006de935
006DE933  8B F8                     MOV EDI,EAX
LAB_006de935:
006DE935  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
006DE938  7E 03                     JLE 0x006de93d
006DE93A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006de93d:
006DE93D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006DE940  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006DE943  C1 F9 10                  SAR ECX,0x10
006DE946  3B CA                     CMP ECX,EDX
006DE948  7D 03                     JGE 0x006de94d
006DE94A  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_006de94d:
006DE94D  3B CB                     CMP ECX,EBX
006DE94F  7E 02                     JLE 0x006de953
006DE951  8B D9                     MOV EBX,ECX
LAB_006de953:
006DE953  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
006DE956  3B C2                     CMP EAX,EDX
006DE958  7C 1D                     JL 0x006de977
006DE95A  3B 46 38                  CMP EAX,dword ptr [ESI + 0x38]
006DE95D  7D 18                     JGE 0x006de977
006DE95F  3B 4E 34                  CMP ECX,dword ptr [ESI + 0x34]
006DE962  7C 13                     JL 0x006de977
006DE964  3B 4E 3C                  CMP ECX,dword ptr [ESI + 0x3c]
006DE967  7D 0E                     JGE 0x006de977
006DE969  5F                        POP EDI
006DE96A  5E                        POP ESI
006DE96B  B8 01 00 00 00            MOV EAX,0x1
006DE970  5B                        POP EBX
006DE971  8B E5                     MOV ESP,EBP
006DE973  5D                        POP EBP
006DE974  C2 18 00                  RET 0x18
LAB_006de977:
006DE977  39 55 08                  CMP dword ptr [EBP + 0x8],EDX
006DE97A  7D 0B                     JGE 0x006de987
006DE97C  5F                        POP EDI
006DE97D  5E                        POP ESI
006DE97E  33 C0                     XOR EAX,EAX
006DE980  5B                        POP EBX
006DE981  8B E5                     MOV ESP,EBP
006DE983  5D                        POP EBP
006DE984  C2 18 00                  RET 0x18
LAB_006de987:
006DE987  3B 7E 38                  CMP EDI,dword ptr [ESI + 0x38]
006DE98A  7C 0B                     JL 0x006de997
006DE98C  5F                        POP EDI
006DE98D  5E                        POP ESI
006DE98E  33 C0                     XOR EAX,EAX
006DE990  5B                        POP EBX
006DE991  8B E5                     MOV ESP,EBP
006DE993  5D                        POP EBP
006DE994  C2 18 00                  RET 0x18
LAB_006de997:
006DE997  3B 5E 34                  CMP EBX,dword ptr [ESI + 0x34]
006DE99A  7D 0B                     JGE 0x006de9a7
006DE99C  5F                        POP EDI
006DE99D  5E                        POP ESI
006DE99E  33 C0                     XOR EAX,EAX
006DE9A0  5B                        POP EBX
006DE9A1  8B E5                     MOV ESP,EBP
006DE9A3  5D                        POP EBP
006DE9A4  C2 18 00                  RET 0x18
LAB_006de9a7:
006DE9A7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006DE9AA  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
006DE9AD  33 C0                     XOR EAX,EAX
006DE9AF  3B D1                     CMP EDX,ECX
006DE9B1  5F                        POP EDI
006DE9B2  5E                        POP ESI
006DE9B3  0F 9C C0                  SETL AL
006DE9B6  5B                        POP EBX
006DE9B7  8B E5                     MOV ESP,EBP
006DE9B9  5D                        POP EBP
006DE9BA  C2 18 00                  RET 0x18
