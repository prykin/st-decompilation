ChooseMapTy::DeleteCtrls:
005AF350  55                        PUSH EBP
005AF351  8B EC                     MOV EBP,ESP
005AF353  83 EC 4C                  SUB ESP,0x4c
005AF356  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AF35B  53                        PUSH EBX
005AF35C  56                        PUSH ESI
005AF35D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005AF360  33 DB                     XOR EBX,EBX
005AF362  57                        PUSH EDI
005AF363  8D 55 B8                  LEA EDX,[EBP + -0x48]
005AF366  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005AF369  53                        PUSH EBX
005AF36A  52                        PUSH EDX
005AF36B  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005AF36E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AF374  E8 77 E4 17 00            CALL 0x0072d7f0
005AF379  8B F0                     MOV ESI,EAX
005AF37B  83 C4 08                  ADD ESP,0x8
005AF37E  3B F3                     CMP ESI,EBX
005AF380  0F 85 43 07 00 00         JNZ 0x005afac9
005AF386  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005AF38B  3B C3                     CMP EAX,EBX
005AF38D  74 28                     JZ 0x005af3b7
005AF38F  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005AF395  74 14                     JZ 0x005af3ab
005AF397  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005AF39A  83 F9 FF                  CMP ECX,-0x1
005AF39D  74 18                     JZ 0x005af3b7
005AF39F  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005AF3A2  51                        PUSH ECX
005AF3A3  50                        PUSH EAX
005AF3A4  E8 47 47 10 00            CALL 0x006b3af0
005AF3A9  EB 0C                     JMP 0x005af3b7
LAB_005af3ab:
005AF3AB  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005AF3B1  51                        PUSH ECX
005AF3B2  E8 59 97 10 00            CALL 0x006b8b10
LAB_005af3b7:
005AF3B7  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005AF3BA  53                        PUSH EBX
005AF3BB  53                        PUSH EBX
005AF3BC  53                        PUSH EBX
005AF3BD  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005AF3C0  53                        PUSH EBX
005AF3C1  53                        PUSH EBX
005AF3C2  53                        PUSH EBX
005AF3C3  6A 1C                     PUSH 0x1c
005AF3C5  6A 02                     PUSH 0x2
005AF3C7  68 A1 C0 00 00            PUSH 0xc0a1
005AF3CC  6A 02                     PUSH 0x2
005AF3CE  52                        PUSH EDX
005AF3CF  53                        PUSH EBX
005AF3D0  E8 EA 39 E5 FF            CALL 0x00402dbf
005AF3D5  8B 86 83 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c83]
005AF3DB  83 C4 30                  ADD ESP,0x30
005AF3DE  3B C3                     CMP EAX,EBX
005AF3E0  74 09                     JZ 0x005af3eb
005AF3E2  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AF3E5  50                        PUSH EAX
005AF3E6  E8 C5 62 13 00            CALL 0x006e56b0
LAB_005af3eb:
005AF3EB  8B 86 87 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c87]
005AF3F1  89 9E 83 1C 00 00         MOV dword ptr [ESI + 0x1c83],EBX
005AF3F7  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AF3FD  50                        PUSH EAX
005AF3FE  51                        PUSH ECX
005AF3FF  E8 EC 46 10 00            CALL 0x006b3af0
005AF404  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AF40A  68 9D 01 00 00            PUSH 0x19d
005AF40F  68 04 02 00 00            PUSH 0x204
005AF414  6A 38                     PUSH 0x38
005AF416  68 12 01 00 00            PUSH 0x112
005AF41B  52                        PUSH EDX
005AF41C  E8 5F 6B 10 00            CALL 0x006b5f80
005AF421  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005AF427  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005AF42D  05 40 01 00 00            ADD EAX,0x140
005AF432  50                        PUSH EAX
005AF433  68 9D 01 00 00            PUSH 0x19d
005AF438  68 04 02 00 00            PUSH 0x204
005AF43D  6A 38                     PUSH 0x38
005AF43F  68 12 01 00 00            PUSH 0x112
005AF444  53                        PUSH EBX
005AF445  53                        PUSH EBX
005AF446  51                        PUSH ECX
005AF447  E8 86 4E E5 FF            CALL 0x004042d2
005AF44C  8B 86 6C 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a6c]
005AF452  3B C3                     CMP EAX,EBX
005AF454  74 09                     JZ 0x005af45f
005AF456  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AF459  50                        PUSH EAX
005AF45A  E8 51 62 13 00            CALL 0x006e56b0
LAB_005af45f:
005AF45F  8B 8E B8 20 00 00         MOV ECX,dword ptr [ESI + 0x20b8]
005AF465  89 9E 6C 1A 00 00         MOV dword ptr [ESI + 0x1a6c],EBX
005AF46B  3B CB                     CMP ECX,EBX
005AF46D  74 1A                     JZ 0x005af489
005AF46F  E8 16 1E E5 FF            CALL 0x0040128a
005AF474  8B 96 B8 20 00 00         MOV EDX,dword ptr [ESI + 0x20b8]
005AF47A  52                        PUSH EDX
005AF47B  E8 30 EE 17 00            CALL 0x0072e2b0
005AF480  83 C4 04                  ADD ESP,0x4
005AF483  89 9E B8 20 00 00         MOV dword ptr [ESI + 0x20b8],EBX
LAB_005af489:
005AF489  6A 33                     PUSH 0x33
005AF48B  E8 A0 F0 17 00            CALL 0x0072e530
005AF490  83 C4 04                  ADD ESP,0x4
005AF493  3B C3                     CMP EAX,EBX
005AF495  74 3A                     JZ 0x005af4d1
005AF497  BF 01 00 00 00            MOV EDI,0x1
005AF49C  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005AF4A0  88 18                     MOV byte ptr [EAX],BL
005AF4A2  C7 40 03 FF FF FF FF      MOV dword ptr [EAX + 0x3],0xffffffff
005AF4A9  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005AF4AD  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005AF4B0  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005AF4B3  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005AF4B6  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005AF4B9  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005AF4BC  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005AF4C3  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005AF4C6  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005AF4C9  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005AF4CC  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005AF4CF  EB 07                     JMP 0x005af4d8
LAB_005af4d1:
005AF4D1  33 C0                     XOR EAX,EAX
005AF4D3  BF 01 00 00 00            MOV EDI,0x1
LAB_005af4d8:
005AF4D8  3B C3                     CMP EAX,EBX
005AF4DA  89 86 B8 20 00 00         MOV dword ptr [ESI + 0x20b8],EAX
005AF4E0  0F 84 9A 00 00 00         JZ 0x005af580
005AF4E6  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AF4EB  53                        PUSH EBX
005AF4EC  57                        PUSH EDI
005AF4ED  6A 10                     PUSH 0x10
005AF4EF  57                        PUSH EDI
005AF4F0  68 9D 01 00 00            PUSH 0x19d
005AF4F5  68 04 02 00 00            PUSH 0x204
005AF4FA  6A 38                     PUSH 0x38
005AF4FC  68 12 01 00 00            PUSH 0x112
005AF501  50                        PUSH EAX
005AF502  E8 E9 04 11 00            CALL 0x006bf9f0
005AF507  8B 8E B8 20 00 00         MOV ECX,dword ptr [ESI + 0x20b8]
005AF50D  50                        PUSH EAX
005AF50E  6A 38                     PUSH 0x38
005AF510  68 12 01 00 00            PUSH 0x112
005AF515  6A 02                     PUSH 0x2
005AF517  E8 81 50 E5 FF            CALL 0x0040459d
005AF51C  85 C0                     TEST EAX,EAX
005AF51E  74 35                     JZ 0x005af555
005AF520  8B 86 B8 20 00 00         MOV EAX,dword ptr [ESI + 0x20b8]
005AF526  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005AF529  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005AF530  8B 86 B8 20 00 00         MOV EAX,dword ptr [ESI + 0x20b8]
005AF536  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005AF539  3B C3                     CMP EAX,EBX
005AF53B  7C 0D                     JL 0x005af54a
005AF53D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AF543  50                        PUSH EAX
005AF544  51                        PUSH ECX
005AF545  E8 E6 3E 10 00            CALL 0x006b3430
LAB_005af54a:
005AF54A  8B 8E B8 20 00 00         MOV ECX,dword ptr [ESI + 0x20b8]
005AF550  E8 9C 60 E5 FF            CALL 0x004055f1
LAB_005af555:
005AF555  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AF55B  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
005AF55E  50                        PUSH EAX
005AF55F  57                        PUSH EDI
005AF560  68 9D 01 00 00            PUSH 0x19d
005AF565  68 04 02 00 00            PUSH 0x204
005AF56A  6A 38                     PUSH 0x38
005AF56C  68 12 01 00 00            PUSH 0x112
005AF571  6A 38                     PUSH 0x38
005AF573  68 12 01 00 00            PUSH 0x112
005AF578  E8 1B 2D E5 FF            CALL 0x00402298
005AF57D  83 C4 20                  ADD ESP,0x20
LAB_005af580:
005AF580  8B 86 74 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a74]
005AF586  83 F8 FF                  CMP EAX,-0x1
005AF589  74 0D                     JZ 0x005af598
005AF58B  8B 8E B8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ab8]
005AF591  50                        PUSH EAX
005AF592  51                        PUSH ECX
005AF593  E8 58 45 10 00            CALL 0x006b3af0
LAB_005af598:
005AF598  8B 86 05 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b05]
005AF59E  83 F8 FF                  CMP EAX,-0x1
005AF5A1  74 0D                     JZ 0x005af5b0
005AF5A3  8B 96 49 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b49]
005AF5A9  50                        PUSH EAX
005AF5AA  52                        PUSH EDX
005AF5AB  E8 40 45 10 00            CALL 0x006b3af0
LAB_005af5b0:
005AF5B0  8B 86 96 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b96]
005AF5B6  83 F8 FF                  CMP EAX,-0x1
005AF5B9  74 0D                     JZ 0x005af5c8
005AF5BB  50                        PUSH EAX
005AF5BC  8B 86 DA 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bda]
005AF5C2  50                        PUSH EAX
005AF5C3  E8 28 45 10 00            CALL 0x006b3af0
LAB_005af5c8:
005AF5C8  8D BE 23 1C 00 00         LEA EDI,[ESI + 0x1c23]
005AF5CE  C7 45 FC 16 00 00 00      MOV dword ptr [EBP + -0x4],0x16
LAB_005af5d5:
005AF5D5  8B 0F                     MOV ECX,dword ptr [EDI]
005AF5D7  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AF5DD  51                        PUSH ECX
005AF5DE  52                        PUSH EDX
005AF5DF  E8 0C 45 10 00            CALL 0x006b3af0
005AF5E4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005AF5E7  83 C7 04                  ADD EDI,0x4
005AF5EA  48                        DEC EAX
005AF5EB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005AF5EE  75 E5                     JNZ 0x005af5d5
005AF5F0  38 9E B4 20 00 00         CMP byte ptr [ESI + 0x20b4],BL
005AF5F6  0F 84 13 02 00 00         JZ 0x005af80f
005AF5FC  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AF601  8B 80 89 03 00 00         MOV EAX,dword ptr [EAX + 0x389]
005AF607  3B C3                     CMP EAX,EBX
005AF609  74 09                     JZ 0x005af614
005AF60B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AF60E  50                        PUSH EAX
005AF60F  E8 9C 60 13 00            CALL 0x006e56b0
LAB_005af614:
005AF614  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AF61A  68 FF 00 00 00            PUSH 0xff
005AF61F  89 99 89 03 00 00         MOV dword ptr [ECX + 0x389],EBX
005AF625  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AF62B  8B 82 44 05 00 00         MOV EAX,dword ptr [EDX + 0x544]
005AF631  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005AF634  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005AF637  51                        PUSH ECX
005AF638  52                        PUSH EDX
005AF639  53                        PUSH EBX
005AF63A  53                        PUSH EBX
005AF63B  53                        PUSH EBX
005AF63C  50                        PUSH EAX
005AF63D  E8 2E 4B 10 00            CALL 0x006b4170
005AF642  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AF647  8B 80 48 05 00 00         MOV EAX,dword ptr [EAX + 0x548]
005AF64D  3B C3                     CMP EAX,EBX
005AF64F  74 06                     JZ 0x005af657
005AF651  50                        PUSH EAX
005AF652  E8 19 5F 10 00            CALL 0x006b5570
LAB_005af657:
005AF657  6A 0A                     PUSH 0xa
005AF659  6A 0A                     PUSH 0xa
005AF65B  53                        PUSH EBX
005AF65C  E8 8F 5E 10 00            CALL 0x006b54f0
005AF661  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AF667  89 81 48 05 00 00         MOV dword ptr [ECX + 0x548],EAX
005AF66D  8B 8E BC 20 00 00         MOV ECX,dword ptr [ESI + 0x20bc]
005AF673  3B CB                     CMP ECX,EBX
005AF675  74 1A                     JZ 0x005af691
005AF677  E8 0E 1C E5 FF            CALL 0x0040128a
005AF67C  8B 96 BC 20 00 00         MOV EDX,dword ptr [ESI + 0x20bc]
005AF682  52                        PUSH EDX
005AF683  E8 28 EC 17 00            CALL 0x0072e2b0
005AF688  83 C4 04                  ADD ESP,0x4
005AF68B  89 9E BC 20 00 00         MOV dword ptr [ESI + 0x20bc],EBX
LAB_005af691:
005AF691  6A 33                     PUSH 0x33
005AF693  E8 98 EE 17 00            CALL 0x0072e530
005AF698  83 C4 04                  ADD ESP,0x4
005AF69B  3B C3                     CMP EAX,EBX
005AF69D  74 35                     JZ 0x005af6d4
005AF69F  83 C9 FF                  OR ECX,0xffffffff
005AF6A2  BF 01 00 00 00            MOV EDI,0x1
005AF6A7  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005AF6AB  88 18                     MOV byte ptr [EAX],BL
005AF6AD  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005AF6B0  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005AF6B4  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005AF6B7  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005AF6BA  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005AF6BD  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005AF6C0  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005AF6C3  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005AF6C6  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005AF6C9  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005AF6CC  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005AF6CF  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005AF6D2  EB 07                     JMP 0x005af6db
LAB_005af6d4:
005AF6D4  33 C0                     XOR EAX,EAX
005AF6D6  BF 01 00 00 00            MOV EDI,0x1
LAB_005af6db:
005AF6DB  3B C3                     CMP EAX,EBX
005AF6DD  89 86 BC 20 00 00         MOV dword ptr [ESI + 0x20bc],EAX
005AF6E3  0F 84 B6 00 00 00         JZ 0x005af79f
005AF6E9  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AF6EE  53                        PUSH EBX
005AF6EF  57                        PUSH EDI
005AF6F0  6A 10                     PUSH 0x10
005AF6F2  57                        PUSH EDI
005AF6F3  68 21 01 00 00            PUSH 0x121
005AF6F8  68 F9 00 00 00            PUSH 0xf9
005AF6FD  68 B4 00 00 00            PUSH 0xb4
005AF702  6A 0A                     PUSH 0xa
005AF704  50                        PUSH EAX
005AF705  E8 E6 02 11 00            CALL 0x006bf9f0
005AF70A  8B 8E BC 20 00 00         MOV ECX,dword ptr [ESI + 0x20bc]
005AF710  50                        PUSH EAX
005AF711  68 B4 00 00 00            PUSH 0xb4
005AF716  6A 0A                     PUSH 0xa
005AF718  6A 04                     PUSH 0x4
005AF71A  E8 7E 4E E5 FF            CALL 0x0040459d
005AF71F  85 C0                     TEST EAX,EAX
005AF721  74 35                     JZ 0x005af758
005AF723  8B 86 BC 20 00 00         MOV EAX,dword ptr [ESI + 0x20bc]
005AF729  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005AF72C  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005AF733  8B 86 BC 20 00 00         MOV EAX,dword ptr [ESI + 0x20bc]
005AF739  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005AF73C  3B C3                     CMP EAX,EBX
005AF73E  7C 0D                     JL 0x005af74d
005AF740  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AF746  50                        PUSH EAX
005AF747  51                        PUSH ECX
005AF748  E8 E3 3C 10 00            CALL 0x006b3430
LAB_005af74d:
005AF74D  8B 8E BC 20 00 00         MOV ECX,dword ptr [ESI + 0x20bc]
005AF753  E8 99 5E E5 FF            CALL 0x004055f1
LAB_005af758:
005AF758  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AF75E  68 21 01 00 00            PUSH 0x121
005AF763  68 F9 00 00 00            PUSH 0xf9
005AF768  68 B4 00 00 00            PUSH 0xb4
005AF76D  6A 0A                     PUSH 0xa
005AF76F  52                        PUSH EDX
005AF770  E8 0B 68 10 00            CALL 0x006b5f80
005AF775  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AF77A  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005AF77D  51                        PUSH ECX
005AF77E  57                        PUSH EDI
005AF77F  68 21 01 00 00            PUSH 0x121
005AF784  68 F9 00 00 00            PUSH 0xf9
005AF789  68 B4 00 00 00            PUSH 0xb4
005AF78E  6A 0A                     PUSH 0xa
005AF790  68 B4 00 00 00            PUSH 0xb4
005AF795  6A 0A                     PUSH 0xa
005AF797  E8 FC 2A E5 FF            CALL 0x00402298
005AF79C  83 C4 20                  ADD ESP,0x20
LAB_005af79f:
005AF79F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AF7A4  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005AF7AA  83 F9 FF                  CMP ECX,-0x1
005AF7AD  74 12                     JZ 0x005af7c1
005AF7AF  8B 90 D5 03 00 00         MOV EDX,dword ptr [EAX + 0x3d5]
005AF7B5  51                        PUSH ECX
005AF7B6  52                        PUSH EDX
005AF7B7  E8 34 43 10 00            CALL 0x006b3af0
005AF7BC  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005af7c1:
005AF7C1  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005AF7C7  83 F9 FF                  CMP ECX,-0x1
005AF7CA  74 12                     JZ 0x005af7de
005AF7CC  8B 80 66 04 00 00         MOV EAX,dword ptr [EAX + 0x466]
005AF7D2  51                        PUSH ECX
005AF7D3  50                        PUSH EAX
005AF7D4  E8 17 43 10 00            CALL 0x006b3af0
005AF7D9  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005af7de:
005AF7DE  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005AF7E4  83 F9 FF                  CMP ECX,-0x1
005AF7E7  74 12                     JZ 0x005af7fb
005AF7E9  51                        PUSH ECX
005AF7EA  8B 88 F7 04 00 00         MOV ECX,dword ptr [EAX + 0x4f7]
005AF7F0  51                        PUSH ECX
005AF7F1  E8 FA 42 10 00            CALL 0x006b3af0
005AF7F6  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005af7fb:
005AF7FB  8B 90 40 05 00 00         MOV EDX,dword ptr [EAX + 0x540]
005AF801  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AF806  52                        PUSH EDX
005AF807  50                        PUSH EAX
005AF808  E8 E3 42 10 00            CALL 0x006b3af0
005AF80D  EB 29                     JMP 0x005af838
LAB_005af80f:
005AF80F  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005AF816  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005AF819  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AF81F  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005AF822  51                        PUSH ECX
005AF823  8B CE                     MOV ECX,ESI
005AF825  8B 82 89 03 00 00         MOV EAX,dword ptr [EDX + 0x389]
005AF82B  50                        PUSH EAX
005AF82C  6A 02                     PUSH 0x2
005AF82E  E8 4D 68 13 00            CALL 0x006e6080
005AF833  BF 01 00 00 00            MOV EDI,0x1
LAB_005af838:
005AF838  38 9E B7 20 00 00         CMP byte ptr [ESI + 0x20b7],BL
005AF83E  0F 84 E4 01 00 00         JZ 0x005afa28
005AF844  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AF84A  8B 81 4C 05 00 00         MOV EAX,dword ptr [ECX + 0x54c]
005AF850  3B C3                     CMP EAX,EBX
005AF852  74 15                     JZ 0x005af869
005AF854  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AF857  50                        PUSH EAX
005AF858  E8 53 5E 13 00            CALL 0x006e56b0
005AF85D  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AF863  89 9A 4C 05 00 00         MOV dword ptr [EDX + 0x54c],EBX
LAB_005af869:
005AF869  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AF86E  8B 80 50 05 00 00         MOV EAX,dword ptr [EAX + 0x550]
005AF874  3B C3                     CMP EAX,EBX
005AF876  74 15                     JZ 0x005af88d
005AF878  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005AF87B  50                        PUSH EAX
005AF87C  E8 2F 5E 13 00            CALL 0x006e56b0
005AF881  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AF887  89 99 50 05 00 00         MOV dword ptr [ECX + 0x550],EBX
LAB_005af88d:
005AF88D  8B 8E C0 20 00 00         MOV ECX,dword ptr [ESI + 0x20c0]
005AF893  3B CB                     CMP ECX,EBX
005AF895  74 1A                     JZ 0x005af8b1
005AF897  E8 EE 19 E5 FF            CALL 0x0040128a
005AF89C  8B 96 C0 20 00 00         MOV EDX,dword ptr [ESI + 0x20c0]
005AF8A2  52                        PUSH EDX
005AF8A3  E8 08 EA 17 00            CALL 0x0072e2b0
005AF8A8  83 C4 04                  ADD ESP,0x4
005AF8AB  89 9E C0 20 00 00         MOV dword ptr [ESI + 0x20c0],EBX
LAB_005af8b1:
005AF8B1  6A 33                     PUSH 0x33
005AF8B3  E8 78 EC 17 00            CALL 0x0072e530
005AF8B8  83 C4 04                  ADD ESP,0x4
005AF8BB  3B C3                     CMP EAX,EBX
005AF8BD  74 30                     JZ 0x005af8ef
005AF8BF  83 C9 FF                  OR ECX,0xffffffff
005AF8C2  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005AF8C6  88 18                     MOV byte ptr [EAX],BL
005AF8C8  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005AF8CB  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005AF8CF  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005AF8D2  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005AF8D5  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005AF8D8  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005AF8DB  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005AF8DE  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005AF8E1  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005AF8E4  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005AF8E7  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005AF8EA  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005AF8ED  EB 02                     JMP 0x005af8f1
LAB_005af8ef:
005AF8EF  33 C0                     XOR EAX,EAX
LAB_005af8f1:
005AF8F1  3B C3                     CMP EAX,EBX
005AF8F3  89 86 C0 20 00 00         MOV dword ptr [ESI + 0x20c0],EAX
005AF8F9  0F 84 BB 00 00 00         JZ 0x005af9ba
005AF8FF  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AF904  53                        PUSH EBX
005AF905  57                        PUSH EDI
005AF906  6A 10                     PUSH 0x10
005AF908  57                        PUSH EDI
005AF909  6A 62                     PUSH 0x62
005AF90B  68 90 01 00 00            PUSH 0x190
005AF910  68 F1 01 00 00            PUSH 0x1f1
005AF915  68 C8 00 00 00            PUSH 0xc8
005AF91A  50                        PUSH EAX
005AF91B  E8 D0 00 11 00            CALL 0x006bf9f0
005AF920  8B 8E C0 20 00 00         MOV ECX,dword ptr [ESI + 0x20c0]
005AF926  50                        PUSH EAX
005AF927  68 F1 01 00 00            PUSH 0x1f1
005AF92C  68 C8 00 00 00            PUSH 0xc8
005AF931  57                        PUSH EDI
005AF932  E8 66 4C E5 FF            CALL 0x0040459d
005AF937  85 C0                     TEST EAX,EAX
005AF939  74 35                     JZ 0x005af970
005AF93B  8B 86 C0 20 00 00         MOV EAX,dword ptr [ESI + 0x20c0]
005AF941  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005AF944  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005AF94B  8B 86 C0 20 00 00         MOV EAX,dword ptr [ESI + 0x20c0]
005AF951  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005AF954  3B C3                     CMP EAX,EBX
005AF956  7C 0D                     JL 0x005af965
005AF958  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AF95E  50                        PUSH EAX
005AF95F  51                        PUSH ECX
005AF960  E8 CB 3A 10 00            CALL 0x006b3430
LAB_005af965:
005AF965  8B 8E C0 20 00 00         MOV ECX,dword ptr [ESI + 0x20c0]
005AF96B  E8 81 5C E5 FF            CALL 0x004055f1
LAB_005af970:
005AF970  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AF976  6A 62                     PUSH 0x62
005AF978  68 90 01 00 00            PUSH 0x190
005AF97D  68 F1 01 00 00            PUSH 0x1f1
005AF982  68 C8 00 00 00            PUSH 0xc8
005AF987  52                        PUSH EDX
005AF988  E8 F3 65 10 00            CALL 0x006b5f80
005AF98D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AF992  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005AF995  51                        PUSH ECX
005AF996  57                        PUSH EDI
005AF997  6A 62                     PUSH 0x62
005AF999  68 90 01 00 00            PUSH 0x190
005AF99E  68 F1 01 00 00            PUSH 0x1f1
005AF9A3  68 C8 00 00 00            PUSH 0xc8
005AF9A8  68 F1 01 00 00            PUSH 0x1f1
005AF9AD  68 C8 00 00 00            PUSH 0xc8
005AF9B2  E8 E1 28 E5 FF            CALL 0x00402298
005AF9B7  83 C4 20                  ADD ESP,0x20
LAB_005af9ba:
005AF9BA  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AF9C0  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AF9C6  8B 82 54 05 00 00         MOV EAX,dword ptr [EDX + 0x554]
005AF9CC  50                        PUSH EAX
005AF9CD  51                        PUSH ECX
005AF9CE  E8 1D 41 10 00            CALL 0x006b3af0
005AF9D3  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AF9D9  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AF9DF  8B 82 58 05 00 00         MOV EAX,dword ptr [EDX + 0x558]
005AF9E5  50                        PUSH EAX
005AF9E6  51                        PUSH ECX
005AF9E7  E8 04 41 10 00            CALL 0x006b3af0
005AF9EC  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AF9F1  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005AF9F7  83 F9 FF                  CMP ECX,-0x1
005AF9FA  74 12                     JZ 0x005afa0e
005AF9FC  8B 90 A4 05 00 00         MOV EDX,dword ptr [EAX + 0x5a4]
005AFA02  51                        PUSH ECX
005AFA03  52                        PUSH EDX
005AFA04  E8 E7 40 10 00            CALL 0x006b3af0
005AFA09  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005afa0e:
005AFA0E  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005AFA14  83 F9 FF                  CMP ECX,-0x1
005AFA17  74 57                     JZ 0x005afa70
005AFA19  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005AFA1F  51                        PUSH ECX
005AFA20  50                        PUSH EAX
005AFA21  E8 CA 40 10 00            CALL 0x006b3af0
005AFA26  EB 48                     JMP 0x005afa70
LAB_005afa28:
005AFA28  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005AFA2F  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005AFA32  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AFA38  8B 81 4C 05 00 00         MOV EAX,dword ptr [ECX + 0x54c]
005AFA3E  3B C3                     CMP EAX,EBX
005AFA40  74 0E                     JZ 0x005afa50
005AFA42  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005AFA45  8B CE                     MOV ECX,ESI
005AFA47  52                        PUSH EDX
005AFA48  50                        PUSH EAX
005AFA49  6A 02                     PUSH 0x2
005AFA4B  E8 30 66 13 00            CALL 0x006e6080
LAB_005afa50:
005AFA50  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005AFA53  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AFA58  8B 80 50 05 00 00         MOV EAX,dword ptr [EAX + 0x550]
005AFA5E  3B C3                     CMP EAX,EBX
005AFA60  74 0E                     JZ 0x005afa70
005AFA62  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005AFA65  51                        PUSH ECX
005AFA66  50                        PUSH EAX
005AFA67  6A 02                     PUSH 0x2
005AFA69  8B CE                     MOV ECX,ESI
005AFA6B  E8 10 66 13 00            CALL 0x006e6080
LAB_005afa70:
005AFA70  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005AFA75  3B C3                     CMP EAX,EBX
005AFA77  74 40                     JZ 0x005afab9
005AFA79  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005AFA7F  74 2C                     JZ 0x005afaad
005AFA81  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005AFA84  83 F9 FF                  CMP ECX,-0x1
005AFA87  74 30                     JZ 0x005afab9
005AFA89  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
005AFA8C  52                        PUSH EDX
005AFA8D  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
005AFA90  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005AFA93  52                        PUSH EDX
005AFA94  6A FE                     PUSH -0x2
005AFA96  51                        PUSH ECX
005AFA97  50                        PUSH EAX
005AFA98  E8 33 3A 10 00            CALL 0x006b34d0
005AFA9D  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005AFAA0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AFAA6  5F                        POP EDI
005AFAA7  5E                        POP ESI
005AFAA8  5B                        POP EBX
005AFAA9  8B E5                     MOV ESP,EBP
005AFAAB  5D                        POP EBP
005AFAAC  C3                        RET
LAB_005afaad:
005AFAAD  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005AFAB3  51                        PUSH ECX
005AFAB4  E8 A7 8F 10 00            CALL 0x006b8a60
LAB_005afab9:
005AFAB9  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005AFABC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AFAC2  5F                        POP EDI
005AFAC3  5E                        POP ESI
005AFAC4  5B                        POP EBX
005AFAC5  8B E5                     MOV ESP,EBP
005AFAC7  5D                        POP EBP
005AFAC8  C3                        RET
LAB_005afac9:
005AFAC9  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005AFACC  68 78 C8 7C 00            PUSH 0x7cc878
005AFAD1  68 CC 4C 7A 00            PUSH 0x7a4ccc
005AFAD6  56                        PUSH ESI
005AFAD7  53                        PUSH EBX
005AFAD8  68 EA 03 00 00            PUSH 0x3ea
005AFADD  68 28 C7 7C 00            PUSH 0x7cc728
005AFAE2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005AFAE7  E8 E4 D9 0F 00            CALL 0x006ad4d0
005AFAEC  83 C4 18                  ADD ESP,0x18
005AFAEF  85 C0                     TEST EAX,EAX
005AFAF1  74 01                     JZ 0x005afaf4
005AFAF3  CC                        INT3
LAB_005afaf4:
005AFAF4  68 EA 03 00 00            PUSH 0x3ea
005AFAF9  68 28 C7 7C 00            PUSH 0x7cc728
005AFAFE  53                        PUSH EBX
005AFAFF  56                        PUSH ESI
005AFB00  E8 3B 63 0F 00            CALL 0x006a5e40
005AFB05  5F                        POP EDI
005AFB06  5E                        POP ESI
005AFB07  5B                        POP EBX
005AFB08  8B E5                     MOV ESP,EBP
005AFB0A  5D                        POP EBP
005AFB0B  C3                        RET
