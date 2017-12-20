/*
* Modern effects for a modern Streamer
* Copyright (C) 2017 Michael Fabian Dirks
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/

#pragma once
#include <memory>
#include "gs-texture.h"
#include "gs-rendertarget.h"
#include "gs-effect.h"

namespace Util {
	class DistanceFieldGenerator2D {
		public:
		DistanceFieldGenerator2D();
		~DistanceFieldGenerator2D();

		std::shared_ptr<GS::RenderTarget> Generate(gs_texture_t* texture);

		private:
		std::unique_ptr<GS::Effect> m_effect;
		std::shared_ptr<GS::RenderTarget> m_renderTarget;
		std::shared_ptr<GS::Texture> m_distanceFieldTexture;
	};
}