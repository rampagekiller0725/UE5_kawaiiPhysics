# Kawaii Physics

Discussion :     
- [Tell me about your work! - あなたの作品を教えてください！](https://github.com/pafuhana1213/KawaiiPhysics/discussions/65)  
- [How to use and set up? - 設定方法などについての雑談・相談の場](https://github.com/pafuhana1213/KawaiiPhysics/discussions/66)  
- [Request Features and Samples - 機能やサンプルのリクエスト](https://github.com/pafuhana1213/KawaiiPhysics/discussions/67)  

Report Issues :   
- https://github.com/pafuhana1213/KawaiiPhysics/issues

Devcommunity :   
- https://forums.unrealengine.com/community/released-projects/1638095-kawaii-physics-simple-fake-physics-to-sway-bones-more-easily-and-more-cutely

## Description
Kawaii Physics is a pseudo-physical plug-in created for Unreal Engine 4 & 5.  
You can sway your hair, skirt, chest, etc easily and in a Kawaii way.

![](https://github.com/pafuhana1213/Screenshot/blob/master/KawaiiPhysics1.gif)  
She is Gray-chan http://rarihoma.xvs.jp/products/graychan

![](https://github.com/pafuhana1213/Screenshot/blob/master/KawaiiPhysics0.gif)  
https://www.youtube.com/watch?v=UvpEIBGegvs  
She is MiraiKomachi https://www.bandainamcostudios.com/works/miraikomachi/

## Features
![](https://github.com/pafuhana1213/Screenshot/blob/master/KawaiiPhysics2.jpg)  
- Controls each bone physically while respecting the pre-physics shape
- All you need to do is add Kawaii Node to AnimGraph and adjust few parameters.
- Sway the specified bone and the bone below it according to the movement of the character.
- Much easier to set up than [AnimDynamics](https://docs.unrealengine.com/en-US/Engine/Animation/NodeReference/SkeletalControls/AnimDynamics/index.html)
- You can use sphere, capsule, plane collision
- You can adjust the position, orientation and size of each collision in the animation editor viewport
- Since the bone length is maintained, even if the calculation is broken, the bone does not expand or contract.
- Uses a simple algorithm without using PhysX, so the cost is lower compared to the engine's standard physical system.

Reference materials  
https://cedil.cesa.or.jp/cedil_sessions/view/416

## Requirement
- UE4.27, UE5

- UE4.27, UE5(Only Plugin)
https://github.com/pafuhana1213/KawaiiPhysics/releases/

- UE4.24~4.26(Only Plugin)
https://github.com/pafuhana1213/KawaiiPhysics/releases/tag/20201202-v1.7.0

## Usage
- Put the KawaiiPhysics folder in the PROJECT's Plugins folder
- About each parameters：https://github.com/pafuhana1213/KawaiiPhysics/wiki/%E5%90%84%E3%83%91%E3%83%A9%E3%83%A1%E3%83%BC%E3%82%BF%E3%81%AB%E3%81%A4%E3%81%84%E3%81%A6
- In case of BP project, an error occurs when packaging. Try converting your prohject to C ++ project

## SampleMap
![](https://github.com/pafuhana1213/Screenshot/blob/master/KawaiiPhysics3.jpg)  
- Content/KawaiiPhysicsSample/KawaiiPhysicsSample
- She is Gray-chan http://rarihoma.xvs.jp/products/graychan

## License
MIT

## Adoption
https://github.com/pafuhana1213/KawaiiPhysics/wiki/%E6%8E%A1%E7%94%A8%E5%AE%9F%E7%B8%BE-Adoption

## Author
[@pafuhana1213](https://twitter.com/pafuhana1213)
